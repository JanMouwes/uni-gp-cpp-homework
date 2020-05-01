//
// Created by Jan Mouwes on 12/03/2020.
//

#ifndef HUISWERK_MY_STRING_H
#define HUISWERK_MY_STRING_H


class my_string {
private:
    char* str;
    unsigned int len;

public:

    my_string();

    my_string(const char* s);

    explicit my_string(int n);

    ~my_string();

    char* ToString() const ;
    void ToUpper();

    unsigned int Length();

    my_string & operator =(const my_string & other);
};


#endif //HUISWERK_MY_STRING_H
