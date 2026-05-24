#include "Sundae.h"
#include <iostream>

Sundae::Sundae(string flavor) {
    this->flavor = flavor;
    //vector empty by default, alr handled
}

void Sundae::addTopping(string topping) {
    toppings.push_back(topping);
}

string Sundae::getFlavor() const {
    return flavor;
}

vector<string> Sundae::getToppings() const {
    return toppings;
}

void Sundae::printSundae() const {
    cout << "Flavor: " << flavor << endl;
    cout << "Toppings: ";
    if (toppings.empty()) {
        cout << "None";
    } else {
        for (string topping : toppings) {
            cout << topping << ", ";
        }
    }
    cout << endl;
}