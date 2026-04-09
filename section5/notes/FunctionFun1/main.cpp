#include <iostream>
using namespace std;

//Function prototype: put this at the top so compiler knows function exists
//Then, put actual code at the bottom (best practice followed by most devs)
void printSomething();
void printMyName();

//Function structure:
// returnType functionName(arguments)

//Main function always automatically called
int main () {

    //call/invocation of code in the function
    printSomething();
    printMyName();

    return 0;
}

//Function Body: code here runs whenever called
void printSomething() {
    cout << "Hey! Look, I'm here!" << endl;
}

void printMyName() {
    cout << "My Name" << endl;
}

