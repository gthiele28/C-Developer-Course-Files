#include <iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();

int main () {

    noConst();
    cout << endl;

    cp2ncd();
    cout << endl;

    ncp2cd();
    cout << endl;

    cp2cd();
    cout << endl;

    return 0;
}

//1. Non-Const pointer to Non-Const data
void noConst() {
    cout << "In noConst" << endl;

    int *intPtr = new int(50);
    cout << "\toriginal value: " << *intPtr << endl;

    *intPtr = 100;
    cout << "\tchanged data: " << *intPtr << endl;

    delete intPtr;

    intPtr = new int(125);
    cout << "\tnew int entirely: " << *intPtr << endl;

    delete intPtr;
}

//2. Const pointer to Non-Const Data
void cp2ncd() {
    cout << "In cp2ncd" << endl;

    int* const intPtr = new int(100);

    cout << "\toriginal value: " << *intPtr << endl;

    *intPtr = 250;
    cout << "\tmodified value: " << *intPtr << endl;

    //This code causes an error
    //NOTE: you can change data stored in a const pointer since the memory address doesn't change
    //But changing the memory address which the pointer stores will throw errors
    // intPtr = new int(222);

    delete intPtr;
}

//3. Non-Const pointer to Const Data
void ncp2cd() {
    cout << "In ncp2cd" << endl;

    const int* intPtr = new int(500);
    cout << "\toriginal value: " << *intPtr << endl;

    //In this case, the int stored by the pointer is what is constant, so 
    //you could store a new address in the pointer, but couldn't change what 
    //is at that address after assigning it 
    // *intPtr = 600

    delete intPtr;

    intPtr = new int (1000);
    cout << "\tnew value: " << *intPtr << endl;

    delete intPtr;
}

//4. Const pointer to Const data
void cp2cd() {
    //Most restrictive version
    cout << "In cp2cd" << endl;

    //After this assignment, neither the address stored by the 
    //pointer or the data at that address can be modified.
    const int* const intPtr = new int(5000);

    cout << "\toriginal (permanent) value: " << *intPtr << endl;

    delete intPtr;
}
