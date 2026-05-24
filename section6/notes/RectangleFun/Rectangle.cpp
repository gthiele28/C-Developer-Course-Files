#include "Rectangle.h"

//Default noarg constructor
Rectangle::Rectangle() {
    this->length = 1.0;
    this->width = 1.0;
}

//Parameterized constructor
Rectangle::Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
}

//Getters
double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

//Setters
void Rectangle::setLength(double newLength) {
    this->length = newLength;
}

void Rectangle::setWidth(double newWidth) {
    this->width = newWidth;
}

//Calculate area
double Rectangle::area() const {
    return length * width;
}

//Challenge: add + test a perimeter() method
double Rectangle::perimeter() const {
    return (2 * length) + (2 * width);
}