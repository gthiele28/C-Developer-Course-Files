#include <iostream>
using namespace std;

int main () {

    bool isRaining = true;
    bool isWarm = true;

    cout << boolalpha;

    cout << "isRaining AND isWarm: " << (isRaining && isWarm) << endl;
    cout << "isRaining OR isWarm: " << (isRaining || isWarm) << endl;
    cout << "NOT isWarm: " << (!isWarm) << endl;

    //Challenge: try other combos of true and false for the two bools above
    //X || Y only false if both X and Y are false
    //X && Y only true if X and Y true
    //!X only true if X false

    return 0;
}