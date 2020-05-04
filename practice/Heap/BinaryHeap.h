//
// Created by Jan Mouwes on 03/05/2020.
//

#ifndef HUISWERK_BINARYHEAP_H
#define HUISWERK_BINARYHEAP_H

template<typename T>
class BinaryHeap {
private:
    T* items;
    int size = 0;
    int capacity = 8;

    void resize(int newCapacity);

    void percolate_up(int index);
    void percolate_down(int index);

public:
    void enqueue(T data);
    T dequeue();
    T peek();

    int get_size();

    BinaryHeap();
    explicit BinaryHeap(int capacity);

    ~BinaryHeap();
};

template class BinaryHeap<int>;

#endif //HUISWERK_BINARYHEAP_H
