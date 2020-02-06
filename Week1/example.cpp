//
// Created by Jan Mouwes on 04/02/2020.
//

#include <iostream>

using namespace std;

void foo()
{
    cout << "bar" << endl;
}

int count_negatives(const double array[], int size)
{
    int negatives = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
            negatives++;
    }
    return negatives;
}
