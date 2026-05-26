#include "person.h"
#include <stdexcept>
using namespace std;

Person::Person(string name) {
    setName(name);
}
//noexcept keyword: used to signal a function will never throw an exception
string Person::getName() const {
    return name;
}

void Person::setName(string name) {
    if (name != "John") {
        this->name = name;
    } else {
        throw runtime_error("John doesn't get one of these");
    }
}