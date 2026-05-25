#include <iostream>
#include "Triangle.h"
using namespace std;

//Constructors
Triangle::Triangle() {
    this->sideA = 1.0;
    this->sideB = 1.0;
    this->sideC = 1.0;
}

Triangle::Triangle(double sideA, double sideB, double sideC) {
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
}

//Getters
double Triangle::getSideA() const {
    return sideA;
}

double Triangle::getSideB() const {
    return sideB;
}

double Triangle::getSideC() const {
    return sideC;
}

//Setters
void Triangle::setSideA(double newA) {
    if (newA > 0) {
        sideA = newA;
    }
}

void Triangle::setSideB(double newB) {
    if (newB > 0) {
        sideB = newB;
    }
}

void Triangle::setSideC(double newC) {
    if (newC > 0) {
        sideC = newC;
    }
}

//Other
bool Triangle::isValid() const {
    return (sideA + sideC > sideB) && (sideB + sideC > sideA) && (sideA + sideB > sideC);
}

double Triangle::perimeter() const {
    return sideA + sideB + sideC;
}

double Triangle::area() const {
    double s = (sideA + sideB + sideC) / 2;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}