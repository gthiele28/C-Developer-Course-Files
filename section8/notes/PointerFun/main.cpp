#include <iostream>
using namespace std;

int main() {

    int myLovelyInt = 150;
    int *somePtr = &myLovelyInt;

    cout << "lovelyInt is initially: " << myLovelyInt << endl;
    cout << "pointer holds value: " << somePtr << endl;
    cout << "pointer dereferenced: " << *somePtr << endl; 
    //* gets value at address ("What are you pointing to?")
    cout << endl;

    *somePtr = 200;

    cout << "lovelyInt is now: " << myLovelyInt << endl;
    cout << "pointer now holds value: " << somePtr << endl;
    cout << "pointer dereferenced: " << *somePtr << endl; 
    cout << endl;

    //Challenge: make another pointer
    double myDouble = 3.14;
    double *doublePtr = &myDouble;

    cout << "DoublePtr Address: " << doublePtr << endl;
    cout << "DoublePtr Value: " << *doublePtr << endl;

    return 0;
}
