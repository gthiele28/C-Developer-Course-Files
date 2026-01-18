#include <iostream>
#include <string>
using namespace std;

int main () {

    int age;
    string fullName;

    cout << "Please enter your age: " << endl;
    cin >> age; //Take input and assign to age.
    //Note the >> instead of << and cin, both referencing the
    //input stream rather than the output stream!

    cout << "You are " << age << " years old." << endl;

    // << only grabs up to whitespace, meaning it won't
    //get multi-word strings or multi-line.

    cout << "Please enter your full name: " << endl;
    
    cin.get(); 
    //If we don't do this, getLine collects the newline character
    //At the end of the previous cout (bc enter key creates newline and submits but previous
    // input only takes the number, leaving newline in the input stream)

    getline(cin, fullName);

    cout << "Hello, " << fullName << "." << endl;

    return 0;
}