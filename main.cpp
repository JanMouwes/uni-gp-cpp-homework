#include <iostream>
#include "Week1/wordguesser.h"
#include "Week1/lecture2.h"
#include "Week2/Stack/Stack.h"

using namespace std;



int main()
{
    runLecture2Ex3();
    runLecture2Ex4();
    runLecture2Ex7n8();
    runLecture2Ex9();

    string filename = "test-file.txt";

    printFile(&filename);

    return 0;
}
