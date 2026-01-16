#include <iostream>
#include <string> //strings aren't part of base c++, must be included
//by this command manually to be supported in code (although like c, char[] could
//be used to support them instead)
using namespace std;

int main () {

    char singleChar = 'x'; //single character, including \n and some other special cases
    cout << singleChar << endl;

    string myName = "Grant";
    cout << myName << endl;

    cout << "Hello " << myName << endl;
    //Note that concatenation is done with the << instead of + here

    return 0;
}