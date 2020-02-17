//
// Created by Jan Mouwes on 06/02/2020.
//

#include "lecture1.h"
#include <iostream>
#include <fstream>

using namespace std;

// Impure function, simplifies fractions
void simplifyFraction(int* numerator, int* denominator) {
    int divisor = calcGCD(*numerator, *denominator);

    *numerator = *numerator/divisor;
    *denominator = *denominator/divisor;
}


bool isPalindrome(char cstring[]) {
    int indexA = 0;
    int indexB = strlen(cstring);
    --indexB;

    while (indexA < indexB) {
        if (cstring[indexA] != cstring[indexB]) {
            return false;
        }

        ++indexA;
        --indexB;
    }

    return true;
}


void runLecture2Ex3() {
    char array2d[][16] {
            {"Jan"},
            {"Ossama"},
            {"Martijn"},
            {"Mart"},
            {"Sybren"},
    };

    for (auto & i : array2d) {
        cout << i << endl;
    }
}

void runLecture2Ex4() {
    char thingArray[] { "thing" };
    char thingsArray[] { "things" };

    char annaArray[] { "anna" };
    char verevArray[] { "verev" };

    cout << isPalindrome(thingArray) << " should not be a palindrome" << endl;
    cout << isPalindrome(thingsArray) << " should not be a palindrome" << endl;

    cout << isPalindrome(annaArray) << " should be a palindrome" << endl;
    cout << isPalindrome(verevArray) << " should be a palindrome" << endl;
}

void printFile(const string* fileName) {
    ifstream inputFile;
    inputFile.open(*fileName);

    // Borrowed from: http://www.fredosaurus.com/notes-cpp/io/readtextfile.html
    if (!inputFile) {
        cerr << "Unable to open file " << *fileName << endl;
        exit(1);   // call system to stop
    }

    char buffer;

    //  By default, whitespaces are skipped when reading files.
    //  This disables that. Functionally identical to: inputFile.unsetf(ios_base::skipws)
    inputFile >> std::noskipws;

    while (inputFile >> buffer) {
        cout << buffer;
    }
}