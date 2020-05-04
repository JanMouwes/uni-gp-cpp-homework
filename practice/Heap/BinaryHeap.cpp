//
// Created by Jan Mouwes on 03/05/2020.
//

#include <iostream>
#include <string>
#include "BinaryHeap.h"

template<typename T>
void BinaryHeap<T>::resize(int newCapacity) {

    T* newArray = new T[newCapacity + 1];

    for (int i = 1; i <= capacity; ++i) {
        newArray[i] = this->items[i];
    }

    this->items = newArray;
    this->capacity = newCapacity;
}

static inline int get_parent_index(const int index) {
    return index / 2;
}

static inline int get_left_child_index(const int index) {
    return index << 1;
}

static inline int get_right_child_index(const int index) {
    return get_left_child_index(index) + 1;
}

template<typename T>
static inline void swap(T array[], const int index1, const int index2) {
    T temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}



template<typename T>
static inline int get_smallest_child_index(const T array[], const int size, const int index) {
    int left_index = get_left_child_index(index);
    int right_index = get_right_child_index(index);

    if (size < left_index) {
        return  -1;
    }

    if (size < right_index) {
        return left_index;
    }

    return array[left_index] < array[right_index] ? left_index : right_index;
}

template<typename T>
void BinaryHeap<T>::percolate_up(int index) {
    int parent_index = get_parent_index(index);
    T data = this->items[index];
    while (items[parent_index] > data && index != 1) {


        swap(items, parent_index, index);
        index = parent_index;
        parent_index = get_parent_index(index);
    }
}

template<typename T>
void BinaryHeap<T>::percolate_down(int index) {
    int child_index = get_smallest_child_index(this->items,this->size, index);

    T data = this->items[index];

    while (child_index != -1 && this->items[child_index] < data) {
        swap(this->items, child_index, index);
        index = child_index;
        child_index = get_smallest_child_index(this->items,this->size, index);
    }
}

template<typename T>
void BinaryHeap<T>::enqueue(T data) {
    int newSize = ++this->size;

    if (newSize >= this->capacity) {
        this->resize(this->capacity * 2);
    }

    this->items[newSize] = data;
    this->percolate_up(newSize);
}

template<typename T>
T BinaryHeap<T>::dequeue() {
    T zeroth = this->items[0];
    T first = this->items[1];
    T second = this->items[2];
    T third = this->items[3];
    T fourth = this->items[4];

    T top = this->peek();

    swap(this->items, 1, this->size);

    this->size--;

    this->percolate_down(1);

    return top;
}

template<typename T>
T BinaryHeap<T>::peek() {
    return this->items[1];
}


template<typename T>
int BinaryHeap<T>::get_size() {
    return this->size;
}

template<typename T>
BinaryHeap<T>::BinaryHeap() {
    this->items = new T[capacity + 1];
}

template<typename T>
BinaryHeap<T>::BinaryHeap(int capacity) {
    this->capacity = capacity;
    this->items = new T[capacity + 1];
}


template<typename T>
BinaryHeap<T>::~BinaryHeap() {
    delete[] this->items;
}
