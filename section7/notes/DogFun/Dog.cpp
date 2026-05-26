#include <string>
#include "Dog.h"
#include <stdexcept>
using namespace std;

Dog::Dog(string breed) {
    if (breed != "Poodle") {
        this->breed = breed;
    } else {
        throw runtime_error("No Poodles Allowed");
    }
}

string Dog::getBreed() const {
    return breed;
}
