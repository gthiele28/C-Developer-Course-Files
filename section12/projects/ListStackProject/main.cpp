#include <iostream>
#include "ListStack.h"
using namespace std;

void printStack(ListStack& stack);

int main () {
    ListStack stack;

    stack.push(100);
    stack.push(150);
    stack.push(222);
    stack.push(71);
    stack.push(53);
    stack.push(125);

    printStack(stack);
    
    cout << "Top of stack: " << stack.peek() << endl;

    return 0;
}

void printStack(ListStack& stack) {
    ListStack temp;
    int data;
    while (!stack.isEmpty()) {
        data = stack.pop();
        cout << data << endl;
        temp.push(data);
    }

    while (!temp.isEmpty()) {
        stack.push(temp.pop());
    }
}