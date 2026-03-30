#include <iostream>
using namespace std;

int main() {

    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];

    myArray[0] = 15;
    myArray[1] = 20;
    myArray[2] = 22;
    myArray[3] = 13;
    myArray[4] = 6;

    //When passing limits of array, garbage data returned but no error given (like C)
    //"Undefined Behavior"
    //Can also cause code to crash
    
    for (int i = 0; i <= ARRAY_SIZE; i++) {
        cout << myArray[i] << endl;
    }

    return 0;
}