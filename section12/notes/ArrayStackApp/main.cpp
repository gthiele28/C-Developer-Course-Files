#include <iostream>
#include "ArrayStack.h"
using namespace std;

int main () {

    ArrayStack stack;

    for (int i = 0; i < 17; i++) {
        stack.push(i);
    }

    while (!stack.isEmpty()) {
        cout << stack.pop() << endl;
    }

    cout << endl;

    //Challenge: print out elements in original order
    ArrayStack stack1;
    ArrayStack stack2;

    for (int i = 0; i < 16; i++) {
        stack1.push(i);
    }

    while (!stack1.isEmpty()) {
        stack2.push(stack1.pop());
    }

    while (!stack2.isEmpty()) {
        cout << stack2.pop() << endl;
    }

    return 0;
}