#include <iostream>
using namespace std;

void someFunction(int aParam);

double myGlobalDouble = 3.1415;

//Local variables: scope - inside the function, lifetime - until function exits
//Global variable: scope - whole program, lifetime - until program exit
//Static local: scope - inside the function, lifetime - until program exit

//Scope: visibility, where variable can be seen/accessed
//Lifetime: durability, how long variable lasts/is stored

int main() {

    int localToMain = 20;

    cout << "The local to main variable is: " << localToMain << endl;
    cout << "The global double (in main) is: " << myGlobalDouble << endl;

    someFunction(25);
    someFunction(28);
    someFunction(32);

    //Can't be accessed
    //cout << myLocalNum << endl;

    return 0;
}

void someFunction(int aParam) {
    int myLocalNum = 100;
    myLocalNum++;

    static int myStatic = 500;
    myStatic++;

    myGlobalDouble++;

    cout << "My local number: " << myLocalNum << endl;
    cout << "The parameter is: " << aParam << endl;
    cout << "Global double (in someFunction) is: " << myGlobalDouble << endl;
    cout << "myStatic: " << myStatic << endl;

    //Also not in scope
    //localToMain++;
}