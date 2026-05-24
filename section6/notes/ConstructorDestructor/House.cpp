#include "House.h"
#include <iostream>
using namespace std;

//"default constructor" with no input arguments called every time object made
//a.k.a. the noarg constructor
House::House() {
    this->numStories = 1;
    this->numWindows = 4;
    this->color = "white";
}

//Challenge: Create + use a parameterized constructor
House::House(int numStories, int numWindows, string color){
    this->numStories = numStories;
    this->numWindows = numWindows;
    this->color = color;
}

House::~House() {
    cout << "The " << color << " house with " << numStories <<
         " stories and " << numWindows << " windows has been destroyed." << endl;
}

void House::setNumStories(int numStories) {
    this->numStories = numStories;
}

void House::setNumWindows(int numWindows) {
    this->numWindows = numWindows;
}

void House::setColor (string color) {
    this->color = color;
}

int House::getNumStories() const { //const: this method won't change any class data
    return numStories;
}

int House::getNumWindows() const {
    return numWindows;
}

string House::getColor() const {
    return color;
}

void House::print() const {
    cout <<  "This house is " << color << " and has "
         << numStories << " stories and " 
         << numWindows << " windows." << endl;
}
