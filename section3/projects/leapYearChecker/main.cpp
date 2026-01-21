/*
    Leap year checker, loops through all years between a set of 2 given and return whether they are leap years
*/

#include <iostream>
using namespace std;

int main () {

    int start;
    int end;
    
    cout << "Enter a year to start from: ";
    cin >> start;

    cout << "Now enter a year to end on: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            cout << i << " is a leap year!" << endl;
        } else {
            cout << i << " is NOT a leap year!" << endl;
        }
    }

    return 0;
}