//
// Created by Jan Mouwes on 05/03/2020.
//

#include "Queue.h"
#include <stdexcept>

template<typename T>
void Queue<T>::enqueue(T value) {
    this->items.push_back(value);
}

template<typename T>
T Queue<T>::dequeue() {
    T item = peek();
    this->items.pop_front();
    return item;
}

template<typename T>
T Queue<T>::peek() {
    if (this->items.size() == 0) {
        throw queue_empty();
    }

    return this->items[0];
}

template <typename T>
unsigned int Queue<T>::size() {
    return items.size();
}

template <typename T>
inline bool Queue<T>::is_empty() {
    return size() == 0;
}