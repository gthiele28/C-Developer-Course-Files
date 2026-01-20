/* SPECS:
    Take input plan and number of devices used,
    Output estimated cost user will have to pay for that month
    A list of prices, devices, etc was given but im not copying all that
    Just assume the numbers both can be hardcoded and are acceptable
*/

#include <iostream>
using namespace std;

int main () {

    //Take inputs first

    char plan;
    int devices;

    cout << "Streaming Service Calculator" << endl;

    bool loopChecker = true;

    while (loopChecker) {
        
        cout << "Which plan do you use? A, B, or C?" << endl;
        cin >> plan;

        switch (plan) {
            case 'A':
            case 'B':
            case 'C':
            case 'a':
            case 'b':
            case 'c':
                cout << "Got it" << endl;
                loopChecker = false;
                break;
            default:
                cout << "Invalid Plan.  Try Again.";
                break;
        }
    }

    cout << "How many devices do you use at once?" << endl;
    cin >> devices;

    //Output here
    int price = 0;
    int devicesAllowed;
    int extraPrice;

    switch (plan) {
            case 'A':
            case 'a':
                price += 9;
                devicesAllowed = 1;
                extraPrice = 6;
                break;
            case 'B':
            case 'b':
                price += 14;
                devicesAllowed = 3;
                extraPrice = 4;
                break;
            case 'C':
            case 'c':
                price += 20;
                devicesAllowed = 5;
                extraPrice = 2;
                break;
            default:
                cout << "This shouldn't be possible" << endl;
                break;
    }

    if (devices > devicesAllowed) {
        price += extraPrice * (devices - devicesAllowed);
    }

    cout << "Your total price will be: $" << price << endl;

    return 0;
}