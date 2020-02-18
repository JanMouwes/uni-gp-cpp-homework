//
// Created by Jan Mouwes on 18/02/2020.
//

#include <iostream>
#include "lecture3.h"

using namespace std;

void run_lecture3_ex1() {
    int* p;
    int* q;
    int* r;

    //  Allocate memory
    p = new int;
    q = new int;

    //  Set integer to value
    *p = 2;
    *q = 3;

    //  Swap p & q
    r = p;
    p = q;
    q = r;

    cout << "p: " << *p << endl;
    cout << "q: " << *q << endl;

    delete p;
    delete q;
}

void create_array_of_length(int* p, int n) {
    int numbers[n];
    for (int i = 0; i < n; ++i) {
        numbers[i] = i+1;
        *p = numbers[i];
        p++;
    }
}

void create_pascal_triangle(int** p, int n) {
    //  Create new pointer array of size N
    int* columns[n];
    for (int column_index = 0; column_index < n; ++column_index) {
        //  Create new array of size column_index
        //  Set row to pointer of first element of the array
        int* row = new int[column_index];

        //  Set first and last item of the row to 1
        row[0] = 1;
        row[column_index] = 1;

        //  Loop through inner row-items,
        //  set them to the item left + the item above
        for (int row_index = 1; row_index < column_index; ++row_index) {
            row[row_index] = row[row_index-1]+ columns[column_index-1][row_index];
        }

        //  Set column's pointer to pointer to first item of the row
        columns[column_index] = row;
        //  Set p to row's item
        *p = row;
        //  Change p to next pointer in the pointer-array
        p++;
    }
}

void run_lecture3_ex2() {
    int* p = new int;
    create_array_of_length(p, 5);
    for (int i = 0; i < 5; ++i) {
        cout << p[i];
    }
    cout << endl;
    delete p;
}

void run_lecture3_ex3() {
    const int depth = 5;

    int* triangle_pointer[depth];
    create_pascal_triangle(triangle_pointer, depth);

    for (int col_index = 0; col_index < depth; ++col_index) {
        for (int row_index = 0; row_index < col_index + 1; ++row_index) {
            cout << triangle_pointer[col_index][row_index] << " ";
        }
        cout << endl;
    }
}
