#include <iostream>
#include <string>
#include "Swapper.h"
using namespace std;

int main () {

    Swapper<int> intSwapper(5, 10);
    Swapper<string> stringSwapper("Yes", "No");

    cout << "Before int swap: " << endl;
    cout << "   " << intSwapper.getFirst() << endl;
    cout << "   " << intSwapper.getSecond() << endl;

    intSwapper.swap();

    cout << "After int swap: " << endl;
    cout << "   " << intSwapper.getFirst() << endl;
    cout << "   " << intSwapper.getSecond() << endl;

    cout << endl;

    cout << "Before str swap: " << endl;
    cout << "   " << stringSwapper.getFirst() << endl;
    cout << "   " << stringSwapper.getSecond() << endl;

    stringSwapper.swap();

    cout << "After str swap: " << endl;
    cout << "   " << stringSwapper.getFirst() << endl;
    cout << "   " << stringSwapper.getSecond() << endl;

    return 0;
}