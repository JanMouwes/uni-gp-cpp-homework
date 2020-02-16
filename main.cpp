#include <iostream>
#include "Week1/wordguesser.h"
#include "Week1/lecture2.h"
#include "Week2/Stack/Stack.h"

using namespace std;

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

int main()
{
    runLecture2Ex3();

    return 0;
}
