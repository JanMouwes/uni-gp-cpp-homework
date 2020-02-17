//
// Created by Jan Mouwes on 06/02/2020.
//

#include <string>

#ifndef HUISWERK_LECTURE2_H
#define HUISWERK_LECTURE2_H

using namespace std;

void simplifyFraction(int* numerator, int* denominator);

void runLecture2Ex3();

void runLecture2Ex4();

void runLecture2Ex7n8();

void runLecture2Ex9();

bool isPalindrome(char string[]);

void printFile(const string* fileName);

struct PlayerState {
    char name[20]{};
    int level = 0;
    double health = 0.0;
    int experience = 0;
};

#endif //HUISWERK_LECTURE2_H