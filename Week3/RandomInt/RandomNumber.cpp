//
// Created by Jan Mouwes on 27/02/2020.
//

#include <map>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>
#include "RandomNumber.h"

using namespace std;

int* generate_random_array(int n) {
    int* array = new int[n];

    //  Fill array with numbers
    for (int i = 0; i < n; ++i) {
        array[i] = i+1;
    }

    //  Swap number with random index in the array
    for (int j = 0; j < n; ++j) {
        int index = rand() % n;

        int temp = array[j];
        array[j] =  array[index];
        array[index] = temp;
    }

    return array;
}

void test_random_array(int tries, int array_length) {
    map<string, int*> random_array_counts;

    for (int i = 0; i < tries; ++i) {
        int* random_array = generate_random_array(array_length);

        ostringstream os;
        for (int j = 0; j < array_length; ++j) {
            os << random_array[j];
        }

        string string_rep = os.str();
        if (random_array_counts[string_rep] == nullptr) {
            random_array_counts[string_rep] = new int;
            *random_array_counts[string_rep] = 0;
        }
        (*random_array_counts[string_rep])++;
    }

    //loop through map, print values
    map<string, int*>::iterator it;

    for ( it = random_array_counts.begin(); it != random_array_counts.end(); it++ ) {
        cout << it->first  << ':' << (*it->second) << endl;
    }

}


static int previous_random_number = 0;

static int random_integer() {
    const int a = 59;
    const int c = 3;
    const int m = 4409;

    previous_random_number = (a * previous_random_number + c) % m;

    return previous_random_number;
}

static int random_integer_in_range(int min, int max) {
    int range = max - min + 1;

    return min + random_integer() % range;
}
