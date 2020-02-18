//
// Created by Jan Mouwes on 06/02/2020.
//

#include <string>

#ifndef HUISWERK_LECTURE2_H
#define HUISWERK_LECTURE2_H

using namespace std;

void simplify_fraction(int* numerator, int* denominator);

void run_lecture2_ex3();

void run_lecture2_ex4();

void run_lecture2_ex7n8();

void run_lecture2_ex9();

bool is_palindrome(char *cstring);

void print_file(const string* fileName);

struct PlayerState {
    char name[20]{};
    int level = 0;
    double health = 0.0;
    int experience = 0;
};

#endif //HUISWERK_LECTURE2_H