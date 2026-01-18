#include <iostream>
using namespace std;

int main () {

    int age;
    age = 15;

    cout << "Your age is " << age << endl;

    //Make a determination based on conditions
    if (age >= 16) {
        cout << "You can drive" << endl;
    } else {
        cout << "You cant drive yet" << endl;
    }

    //Say happy birthday once for every year
    //Execute code more than one time
    for (int i = 1; i <= age; i++) {
        cout << "Happy Birthday!" << endl;
    }

    return 0;
}