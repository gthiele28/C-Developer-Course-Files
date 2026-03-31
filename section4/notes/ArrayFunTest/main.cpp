#include <iostream>
#include <array>
using namespace std;

int main () {

    //Both of the following initialize to all zeroes
    //array<int, 5> myIntArray{ 0, 0, 0, 0, 0 };
    //array<int, 5> myIntArray{};

    array<int, 5> myIntArray{1, 2}; //Sets first 2 elements (indexes of 0 and 1) to 1 and 2 respectively, then rest should be zeroes

    myIntArray[0] = 2;
    myIntArray[1] = 5;
    myIntArray[2] = 10;
    myIntArray[3] = 1;
    myIntArray[4] = 17;

    for (int a : myIntArray) {
        cout << a << endl;
    }

    cout << "Size of the array: " << myIntArray.size() << endl;

    return 0;
}