//
// Created by Jan Mouwes on 04/02/2020.
//

#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

void printIsEven(int number) {
    bool isEven = number % 2 == 0;

    cout << (isEven ? "even" : "odd");
}

int calcExp(int base, int exp) {
    if (exp == 0) { return 1; }

    return base * calcExp(base, exp-1);
}

bool isPrime(int number) {
    if (number < 4) {
        return number > 1;
    }

    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int indexOfValue(int value, const int array[], int arrayLen) {
    for (int i = 0; i < arrayLen; ++i) {
        if (value == array[i]) {
            return i;
        }
    }

    return -1;
}

void sortBubble(int array[], int size) {
    for (int i = 1; i < size; ++i) {
        int a = array[i-1];
        int b = array[i];

        bool shouldSwap = a > b;

        if (shouldSwap) {
            array[i-1] = b;
            array[i] = a;
        }
    }
}

int calcGCD(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }

    return a;
}

int calcLCM(int a, int b) {
    return (a * b) / calcGCD(a, b);
}