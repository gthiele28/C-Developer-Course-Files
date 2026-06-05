#include <iostream>
#include "LinkedStack.h"
using namespace std;

int main() {

    LinkedStack myStack;

    myStack.push(100);
    myStack.push(150);
    myStack.push(222);
    myStack.push(71);
    myStack.push(53);
    myStack.push(125);

    while (!myStack.isEmpty()) {
        cout << myStack.pop() << endl;
    }

    return 0;
}