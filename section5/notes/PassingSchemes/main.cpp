#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum); //The & means 'pass by reference'.  Also the 'address of' operator in C.

//Use pass-by-value for simple values you don't need to modify

//Use pass-by-reference when you want to modify the value passed in
//Or when you don't want to copy big objects like long lists, which can take a lot of time/memory
//NOTE: you cannot pass values like 100 in as references, only variables can be passed that way.


int main() {
    
    int myNumber = 20;

    cout << "Before valueChanged1 is called, myNumber is: " << myNumber << endl;
    valueChanged1(myNumber);
    cout << "After valueChanged1 is called, myNumber is: " << myNumber << endl;

    cout << "\n------------------------------------------\n";

    cout << "Before valueChanged2 is called, myNumber is: " << myNumber << endl;
    valueChanged2(myNumber);
    cout << "After valueChanged2 is called, myNumber is: " << myNumber << endl;


    return 0;
}

//In this case, the value passed is COPIED into the function
//When it is modified or changed, those changes don't "spill out" into the parent function
//This is called Pass-By-Value: The VALUE itself is passed without referencing the variable it is stored in
void valueChanged1(int someNum) {
    someNum = 100;
    cout << "Inside valueChanged1, someNum is: " << someNum << endl;
}

//In this case, the REFERENCE to the value is passed into the function
//Changes are stored at the SAME MEMORY ADDRESS as the variable, so any changes are shared with the parent function
//This is called Pass-By-Reference, as the REFERENCE to the value is what the function uses.
void valueChanged2(int& someNum) {
    someNum = 100;
    cout << "Inside valueChanged2, someNum is: " << someNum << endl;
}