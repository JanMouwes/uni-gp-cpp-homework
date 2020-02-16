//
// Created by Jan Mouwes on 14/02/2020.
//

#ifndef HUISWERK_MYCLASS_H
#define HUISWERK_MYCLASS_H


class MyClass {
private:
    int x;
    int* p;

public:
    MyClass();
    MyClass(int x, int p);

    ~MyClass();

    void set_x(int value);

    void set_p(int value);

    void remove_p();
};


#endif //HUISWERK_MYCLASS_H
