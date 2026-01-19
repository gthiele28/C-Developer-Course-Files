#include <iostream>
#include <cstdlib> //C standard library, for rand() and srand() functions
#include <ctime> //C time library, for time() function

using namespace std;

int main () {

    srand(time(nullptr)); //seeds the RNG with the current time (seed is a "key" which when operated on produces pseudorandom outputs)


    //By scaling using different mod values and addition/subtraction, you can cover any range you want.
    int val1 = rand() % 10; //random number between 0 and 9 inclusive
    int val2 = rand() % 10 + 1; //number from 1 to 10 inclusive instead (bc of the +1 term)

    cout << val1 << endl;
    cout << val2 << endl;

    return 0;
}