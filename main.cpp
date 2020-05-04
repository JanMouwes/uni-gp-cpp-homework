#include <iostream>
#include <map>
#include <sstream>
#include "Week1/wordguesser.h"
#include "Week1/lecture2.h"
#include "Week2/Stack/Stack.h"
#include "Week2/Lecture3/lecture3.h"
#include "Week3/RandomInt/RandomNumber.h"
#include "Week5/my_string.h"
#include "Week3/BinarySearchTree/BinarySearchTree.h"
#include "Week4/lecture6.h"
#include "practice/Heap/BinaryHeap.cpp"

using namespace std;



int main()
{
//    run_lecture2_ex3();
//    run_lecture2_ex4();
//    run_lecture2_ex7n8();
//    run_lecture2_ex9();
//
//    run_lecture3_ex1();
//    run_lecture3_ex2();
//
//    cout << endl;
//
//    run_lecture3_ex3();
//
//    string filename = "test-file.txt";
//
//    print_file(&filename);
//
//    cout << endl;
//
//    test_random_array(50000, 3);
//
//    my_string* str = new my_string("hello world");
//
//    cout << str->ToString() << endl;
//
//    str->ToUpper();
//    cout << str->ToString() << endl;

//    BinarySearchTree tree;
//
//    tree.insert(3);
//    tree.insert(1);
//    tree.insert(2);
//    tree.insert(4);
//    tree.insert(2);
//
//    std::cout << tree.depth() << std::endl;
//
//    std::cout << tree.is_present(1) << std::endl;
//    std::cout << tree.is_present(2) << std::endl;
//    std::cout << tree.is_present(3) << std::endl;
//
//    tree.traverse();

//    for (int i = 0; i < 1000; ++i) {
//        std::cout << random_integer_in_range(0, 8) << ' ';
//    }

//    run_lecture6_ex1();
//    run_lecture6_ex2();

    BinaryHeap<int> heap;

    heap.enqueue(5);
    heap.enqueue(4);
    heap.enqueue(7);
    heap.enqueue(6);
    heap.enqueue(3);
    heap.enqueue(8);
    heap.enqueue(9);

    while (heap.get_size() > 0) {
//        heap.dequeue();
        std::cout << heap.dequeue() << std::endl;
    }

    return 0;
}
