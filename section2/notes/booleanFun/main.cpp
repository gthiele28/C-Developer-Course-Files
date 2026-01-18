#include <iostream>
using namespace std;

int main () {

    cout << boolalpha; // "sticky operator" remains until cleared.
    //Boolalpha specifically will change the previous "0" and "1"
    //to "false" and "true", making the result more readable. 
    
    bool isRaining = false;
    cout << isRaining << endl; //prints 0 instead of false

    bool isNotRaining = true;
    cout << isNotRaining << endl; //prints 1 instead of true

    //Challenge: bools for whether warm or sunny, use boolalpha to print both
    //(to test this, i commented out the above lines)

    bool isSunny = false;
    bool isWarm = true;

    cout << boolalpha << "Is it sunny: " << isSunny << "\nIs it warm: " << isWarm << endl;
    //Note in the solution, this cout was divided among 3 lines, but did the same things.
    
    return 0;
}