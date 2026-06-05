#include <iostream>
#include <string>
#include "ArrayStack.h"
using namespace std;

int main () {
    
    ArrayStack<string> words;

    words.push("apple");
    words.push("banana");
    words.push("cherry");

    cout << "ArrayList of strings: " << endl;

    while (!words.isEmpty()) {
        cout << words.pop() << endl;
    }

    cout << endl;
    cout << "Now, integers: " << endl;

    ArrayStack<int> intStack;

    for (int i = 0; i < 5; i++) {
        intStack.push(i);
    }

    while (!intStack.isEmpty()) {
        cout << intStack.pop() << endl;
    }

    return 0;
}