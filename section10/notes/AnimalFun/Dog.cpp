#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight) {
    this->breed = breed;
}

string Dog::getBreed() const {
    return breed;
}

void Dog::digHole() const {
    cout << "Hole dug!" << endl;
}

string Dog::makeNoise() const {
    return "Woof Woof";
}

void Dog::chaseCat() const {
    cout << "Here, Kitty Kitty!" << endl;
}