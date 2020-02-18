//
// Created by Jan Mouwes on 18/02/2020.
//

#include <iostream>
#include "lecture3.h"

using namespace std;

void run_lecture3_ex1() {
    int* p;
    int* q;
    int* r;

    //  Allocate memory
    p = new int;
    q = new int;

    //  Set integer to value
    *p = 2;
    *q = 3;

    //  Swap p & q
    r = p;
    p = q;
    q = r;

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    delete p;
    delete q;
}

void create_array_of_length(int* p, int n) {
    int numbers[n];
    for (int i = 0; i < n; ++i) {
        numbers[i] = i+1;
        *p = numbers[i];
        p++;
    }
}

void run_lecture3_ex2() {
    int* p = new int;
    create_array_of_length(p, 5);
    for (int i = 0; i < 5; ++i) {
        cout << p[i];
    }
    cout << endl;
    delete p;
}