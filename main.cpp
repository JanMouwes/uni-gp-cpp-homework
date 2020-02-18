#include <iostream>
#include "Week1/wordguesser.h"
#include "Week1/lecture2.h"
#include "Week2/Stack/Stack.h"
#include "Week2/Lecture3/lecture3.h"

using namespace std;



int main()
{
    run_lecture2_ex3();
    run_lecture2_ex4();
    run_lecture2_ex7n8();
    run_lecture2_ex9();

    run_lecture3_ex1();
    run_lecture3_ex2();

    cout << endl;

    run_lecture3_ex3();

    string filename = "test-file.txt";

    print_file(&filename);

    return 0;
}
