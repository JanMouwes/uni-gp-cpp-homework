//
// Created by Jan Mouwes on 14/02/2020.
//

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    Node* current = top;
    while (current && current->next) {
        Node* previous = current;
        current = current->next;

        delete previous;
    }
}

void Stack::push(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = this->top;

    this->top = newNode;
}

int Stack::peek() {
    if (!this->top) {
        return -1; // Messy, TODO throw exception
    }

    return this->top->data;
}
int Stack::pop() {
    int data = peek();

    Node* formerTop = this->top;
    this->top = this->top->next;

    delete formerTop;

    return data;
}

void Stack::print() {
    Node* current = this->top;

    int node = 0;
    while (current) {
        cout << node << ": "<< current->data << endl;

        node++;
        current = current->next;
    }
}

int Stack::size(Node* node) {
    if (node->next) {
        return size(node->next) + 1;
    }

    return 1;
}

int Stack::size() {
    if (this->top) {
        return this->size(this->top);
    }

    return 0;
}

bool Stack::is_empty() {
    return size() == 0;
}

int Stack::sum() {
    int sum = 0;

    std::function<void(int)> addValueToSum = [&sum](int current)->void {
        sum += current;
    };

    this->forEach(addValueToSum);

    return sum;
}

void Stack::forEach(const std::function<void(int value)>& visitor) {
    std::function<void(Node*)> handler = [&visitor](Node* node)->void {
        visitor(node->data);
    };

    forEachNode(handler);
}

void Stack::forEachNode(const std::function<void(Node*)>& visitor) {

    Node* current = this->top;

    while (current) {
        visitor(current);

        current = current->next;
    }
}
