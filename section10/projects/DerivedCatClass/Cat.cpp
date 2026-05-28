#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

Cat::Cat(string name, double weight) : Animal(name, weight) {

}
void Cat::chaseMouse() const {
    cout << "I'll get you!" << endl;
}

string Cat::makeNoise() const {
    return "Meow";
}
string Cat::eat() const {
    return "I like cat food";
}