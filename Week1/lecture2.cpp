//
// Created by Jan Mouwes on 06/02/2020.
//

#include "lecture1.h"
#include "lecture2.h"
#include <iostream>
#include <fstream>

using namespace std;

// Impure function, simplifies fractions
void simplify_fraction(int* numerator, int* denominator) {
    int divisor = calcGCD(*numerator, *denominator);

    *numerator = *numerator/divisor;
    *denominator = *denominator/divisor;
}


bool is_palindrome(char *cstring) {
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


void run_lecture2_ex3() {
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

void run_lecture2_ex4() {
    char thingArray[] { "thing" };
    char thingsArray[] { "things" };

    char annaArray[] { "anna" };
    char verevArray[] { "verev" };

    cout << is_palindrome(thingArray) << " should not be a palindrome" << endl;
    cout << is_palindrome(thingsArray) << " should not be a palindrome" << endl;

    cout << is_palindrome(annaArray) << " should be a palindrome" << endl;
    cout << is_palindrome(verevArray) << " should be a palindrome" << endl;
}

void run_lecture2_ex7n8() {
    PlayerState playerStates[3];

    strcpy(playerStates[0].name,"player 1");
    playerStates[0].level = 1;
    playerStates[0].health = 20.0;
    playerStates[0].experience = 0;

    strcpy(playerStates[1].name,"player 2");
    playerStates[1].level = 2;
    playerStates[1].health = 12.3;
    playerStates[1].experience = 40;

    strcpy(playerStates[2].name,"player 3");
    playerStates[2].level = 1;
    playerStates[2].health = 25.0;
    playerStates[2].experience = 0;

    for (auto current : playerStates) {
        cout << current.name;
        cout << " lvl: " << current.level;
        cout << " hp: " << current.health;
        cout << " exp: " << current.experience;
        cout << endl;
    }

    ofstream output;
    output.open("game.dat", ios::binary);

    output.write((char*) &playerStates, sizeof(playerStates));
    output.close();
}

void run_lecture2_ex9() {
    ifstream input;
    input.open("game.dat", ios::binary);

    PlayerState playerStates[3];

    input.read((char*)&playerStates, sizeof(playerStates));

    input.close();

    ofstream output;
    output.open("player-names.txt");

    for (auto player : playerStates) {
        output << player.name << endl;
    }

    input.close();
    output.close();
}

void print_file(const string* fileName) {
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

    inputFile.close();
}