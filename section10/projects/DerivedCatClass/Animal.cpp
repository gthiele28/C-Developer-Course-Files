#include "Animal.h"
#include <string>
using namespace std;

Animal::Animal(string name, double weight) {
    this->name = name;
    this->weight = weight;
}

string Animal::getName() const {
    return name;
}

void Animal::setName(string newName) {
    name = newName;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(double newWeight) {
    weight = newWeight;
}
string Animal::makeNoise() const {
    return "unknown";
}
