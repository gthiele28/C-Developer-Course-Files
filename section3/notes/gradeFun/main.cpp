#include <iostream>
using namespace std;

int main () {
    //Switch demo
    //Better for handling more cases quickly than If/Else

    char grade;

    cout << "Enter your letter grade (A-F): ";
    cin >> grade;

    //FALLTHROUGH: Without a break statement, code will be executed sequentially
    //Even if it is part of another case.  Below, this property is used to
    //Apply the same output to both capital and lowercase letters without needing
    //To copy the print statements to additional cases.

    //TYPES OF LINES OF CODE:
    //Statement: ends in semicolon, performs an action
    //Declaration: introduces a name/variable
    //Expression: computes a value

    switch (grade) {
        case 'A':
        case 'a':
            cout << "Great Job!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good job!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "You can do better!" << endl;
            break;
        case 'D':
        case 'd':
            cout << "You're getting close to failing" << endl;
            break;
        case 'F':
        case 'f':
            cout << "You are failing" << endl;
            break;
        default:
            cout << "You have entered an invalid grade" << endl;
    }

    return 0;
}