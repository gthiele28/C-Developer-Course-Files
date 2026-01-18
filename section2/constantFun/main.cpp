#include <iostream>
using namespace std;

//Part of the challenge:
#include <string>

int main () {

    //For variables, normal camelCase
    //For constants (const) use UPPER_SNAKE_CASE
    //Constants cannot be reassigned, or an error is thrown
    //Defined using const before the normal declaration

    const double MY_PI = 3.14159;
    cout << MY_PI << endl;

    /*
        Challenge:
        declare and set constant string MY_NAME, 
        try to change it (observe error),
        comment out change and print the string
    */

   const string MY_NAME = "Grant";
   //MY_NAME = "Not my name"; //error here, no operator "=" matches these operands (const string & const char)
   cout << "My name is " << MY_NAME << "." << endl;

    //The above fulfills the challenge requirements.

    return 0;
}

