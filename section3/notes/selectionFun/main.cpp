#include <iostream>
using namespace std;

int main () {

    int age;
    cout << "Welcome to the pub and grill" << endl;
    cout << "Please enter your age:  ";
    cin >> age; //Input on same line as cout text bc no endl ("endline") added there

    //If/Else demo
    if (age >= 21) {
        cout << "Would you like a beer?" << endl;
    } else if (age >= 16) {
        cout << "Would you like a soda?" << endl;
        cout << "At least you can drive!" << endl;
    } else {
        //Must repeat this since if/else will only ever execute ONE statement
        //This is always the topmost one satisfied in the list.
        cout << "Would you like a soda?" << endl;
    }


    cout << "Thanks for coming to the pub and grill!" << endl;

    return 0;
}