//
// Created by Jan Mouwes on 14/02/2020.
//

#ifndef HUISWERK_STACK_H
#define HUISWERK_STACK_H

struct Node{
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    void push(int data);

    int pop();

    int peek();

    bool is_empty();

    static int size(Node* node);
    int size();

    int sum();

    void print();

    Stack();
    ~Stack();

    void forEach(const std::function<void(int)> &visitor);

    void forEachNode(const std::function<void(Node *)> &visitor);
};



#endif //HUISWERK_STACK_H
