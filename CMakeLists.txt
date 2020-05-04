cmake_minimum_required(VERSION 3.15)
project(Huiswerk)

set(CMAKE_CXX_STANDARD 14)

add_executable(Huiswerk main.cpp Week1/example.cpp Week1/example.h Week1/lecture1.cpp Week1/lecture1.h Week1/wordguesser.cpp Week1/wordguesser.h Week1/lecture2.cpp Week1/lecture2.h Week2/Stack/Stack.cpp Week2/Stack/Stack.h Week2/Lecture4/MyClass.cpp Week2/Lecture4/MyClass.h Week2/Lecture3/lecture3.cpp Week2/Lecture3/lecture3.h Week3/RandomInt/RandomNumber.cpp Week3/RandomInt/RandomNumber.h Week4/Queue.cpp Week4/Queue.h Week5/my_string.cpp Week5/my_string.h Week6/lecture8.cpp Week6/lecture8.h Week3/BinarySearchTree/BinarySearchTree.cpp Week3/BinarySearchTree/BinarySearchTree.h Week4/lecture6.cpp Week4/lecture6.h practice/Heap/BinaryHeap.cpp practice/Heap/BinaryHeap.h)

#libraries
add_library(lecture1 STATIC Week1/lecture1.cpp Week1/lecture1.h)
add_library(MyClass STATIC Week2/Lecture4/MyClass.cpp Week2/Lecture4/MyClass.h)