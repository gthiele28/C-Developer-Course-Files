/* 
    PARAMETERS:
    Loop from 0-10 (exclusive)
    Only print even numbers
    Use continue to skip odd numbers
*/


#include <iostream>
using namespace std;

int main () {

    for (int i = 1; i < 10; i++) { //i only goes from 1-9 inclusive

        if (i % 2 == 1) {
            continue; //no need to increment i in a for loop since it's done at the end of each iteration automatically
        }

        cout << "i is now: " << i << endl; //print i after continue check

    }

    return 0;
}