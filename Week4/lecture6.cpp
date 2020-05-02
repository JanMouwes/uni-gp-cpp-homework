//
// Created by Jan Mouwes on 02/05/2020.
//

#include "lecture6.h"
#include <stack>
#include <iostream>
#include <vector>
#include <algorithm>

void print(double d) {
    std::cout << d << std::endl;
}

void run_lecture6_ex1() {
    std::stack<double> s;

    s.push(5.1);
    s.push(5.2);
    s.push(5.3);
    s.push(5.4);
    s.push(5.5);

    while (!s.empty()) {
        print(s.top());
        s.pop();
    }
}

void run_lecture6_ex2() {
    std::vector<int> favouriteNumberVector;
    favouriteNumberVector.reserve(10);

    for (int i = 0; i < 10; ++i) {
        favouriteNumberVector.push_back(7);
    }

    for_each (favouriteNumberVector.begin(), favouriteNumberVector.end(), print);
}