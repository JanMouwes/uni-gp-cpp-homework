#include <iostream>
#include "Week1/wordguesser.h"
#include "Week2/Stack/Stack.h"

using namespace std;

int main()
{
    // call to foo-function:
    Stack stack ;

    stack.push(2);
    stack.push(3);
    stack.push(8);
    stack.push(9);

    cout << stack.size() << endl;

    stack.print();

    return 0;
}
