#include <iostream>
#include <string>
using namespace std;

// double getBigger(double a, double b);
// int getBigger(int a, int b);
// string getBigger(string a, string b);

//==========  Function Templates  ==========
//Any class T passed into this, assuming it is compatible with the
//operations used, will return the correct result
template <class T> //could also use <typename T> on this line
T getBigger(T a, T b) {
    return (a > b) ? a : b;
}

int main () {
    double biggerDub = getBigger(3.14, 5.55);
    int biggerInt = getBigger(11, 9);
    string biggerStr = getBigger("John", "Alice");

    cout << "Bigger Items: " << endl;
    cout << "   " << biggerDub << endl; //5.55
    cout << "   " << biggerInt << endl; //11
    cout << "   " << biggerStr << endl; //John

    return 0;
}

// double getBigger(double a, double b) {
//     return (a > b) ? a : b;
// }

// int getBigger(int a, int b) {
//     return (a > b) ? a : b;
// }

// string getBigger(string a, string b) {
//     return (a > b) ? a : b;
// }
