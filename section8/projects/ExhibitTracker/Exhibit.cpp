#include <string>
#include <iostream>
#include "Exhibit.h"
using namespace std;

Exhibit::Exhibit(string name, int roomNumber, double displaySize) {
    this->name = name;
    this->roomNumber = roomNumber;
    this->displaySize = displaySize;
}
string Exhibit::getName() const {
    return name;
}

int Exhibit::getRoomNumber() const {
    return roomNumber;
}
double Exhibit::getDisplaySize() const {
    return displaySize;
}
