//
// Created by Jan Mouwes on 14/02/2020.
//

#include "MyClass.h"

MyClass::MyClass(): MyClass(0, 0) { }

MyClass::MyClass(int x, int p) {
    this->x = x;
    this->p = &p;
}

MyClass::~MyClass() {
    this->x = 0;
    this->p = nullptr;
}

void MyClass::set_x(int value) {
    this->x = value;
}

void MyClass::set_p(int value) {
    if (this->p == nullptr) {
        int newP = 0;
        this->p = &newP;
    }

    *this->p = value;
}

void MyClass::remove_p() {
    this->p = nullptr;
}
