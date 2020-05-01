//
// Created by Jan Mouwes on 12/03/2020.
//

#include "my_string.h"
#include <ios>
#include <istream>

using namespace std;


inline static unsigned int count_chars(const char *s) {
    int char_count = 0;
    char curr = s[0];
    while (curr != '\0') {
        char_count++;
        curr = s[char_count];
    }

    return char_count;
}

my_string::my_string(const char *s) {
    this->len = count_chars(s);
    this->str = new char[this->len+1];

    for (int i = 0; i < len+1; ++i) {
        this->str[i] = s[i];
    }
}
my_string::my_string(const int n) {
    this->len = n;
    this->str = new char[this->len+1];
}

my_string::my_string() {
    this->len = 0;
    this->str = new char[this->len+1];
}

my_string::~my_string() {
    delete[] this->str;
}

char* my_string::ToString() const {
    return this->str;// TODO copy to different char*
}

void my_string:: ToUpper() {
    for (int i = 0; i < this->len; ++i) {
        const char c = this->str[i];
        if ('a'<= c && c <= 'z') {
            this->str[i] += 'A' - 'a';
        }
    }
}

unsigned int my_string::Length() {
    return this->len;
}

my_string & my_string::operator=(const my_string & other) {
    if (&other != this) {
        this->str = other.str;
        this->len = other.len;
    }

    return *this;
}