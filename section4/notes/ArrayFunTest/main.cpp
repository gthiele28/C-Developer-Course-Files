#include <iostream>
#include <array>
using namespace std;

int main () {

    array<int, 5> myIntArray{ 0, 0, 0, 0, 0 };

    for (int a : myIntArray) {
        cout << a << endl;
    }

    return 0;
}