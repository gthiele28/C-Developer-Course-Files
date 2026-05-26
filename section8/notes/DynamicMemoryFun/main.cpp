#include <iostream>
using namespace std;

int main() {

    int* myIntPtr = new int(123);

    cout << *myIntPtr << endl;

    delete myIntPtr;
    myIntPtr = nullptr;

    //new: allocates memory on the heap
    //delete: releases dynamically allocated memory
    //nullptr: safe default value to indicate a pointer points to nothing
    //memory leak: caused by forgetting to "free"/delete memory
    //dangling pointer: happens if you use a pointer after deleting its target

    //Challenge: make a dynamically allocated boolean and print it
    
    bool* myBoolPtr = new bool(true);

    cout << boolalpha;
    cout << *myBoolPtr << endl;

    delete myBoolPtr;
    myBoolPtr = nullptr;

    return 0;
}
