#include <iostream>
#include <stdexcept>
#include "FuelLevelCritical.h"
using namespace std;

void checkFuelLevel(int percentage);

int main() {

    for (int i = 100; i > 0; i -= 15) {
        try {
            checkFuelLevel(i);
        } catch (FuelLevelCriticalException& err) {
            cout << "ALERT: " << err.what() << endl;
        }
    }

    return 0;
}

void checkFuelLevel(int percentage) {
    if (percentage <= 10) {
        throw FuelLevelCriticalException();
    } else {
        cout << "Fuel safe at " << percentage << "%" << endl;
    }
}