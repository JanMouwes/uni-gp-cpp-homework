//
// Created by Jan Mouwes on 05/03/2020.
//

#ifndef HUISWERK_QUEUE_H
#define HUISWERK_QUEUE_H

#include <list>

using namespace std;

template<typename T>
class Queue {
public:
    void enqueue(T value);

    T dequeue();

    T peek();

    unsigned int size();

    bool is_empty();
private:
    list<T> items;
};

class queue_empty : exception { };


#endif //HUISWERK_QUEUE_H
