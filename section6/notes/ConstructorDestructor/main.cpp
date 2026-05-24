//Refactoring the code (again) from SeparateCompilation
#include <iostream>
#include <string>
#include "House.h"
using namespace std;

int main () {

    // House myHouse;
    // House yourHouse;

    // myHouse.setNumStories(2);
    // myHouse.setNumWindows(6);
    // myHouse.setColor("red");

    // yourHouse.setNumStories(3);
    // yourHouse.setNumWindows(10);
    // yourHouse.setColor("blue");

    // myHouse.print();
    // yourHouse.print();

    //Testing Constructor
    House myOtherHouse;
    myOtherHouse.print();

    //Using setters again
    myOtherHouse.setNumStories(2);
    myOtherHouse.setNumWindows(8);
    myOtherHouse.setColor("green");

    //Retest after using setters
    myOtherHouse.print();

    //Challenge: Creating + using a parameterized constructor
    House challengeHouse(1, 5, "aqua");
    challengeHouse.print();
    
    return 0;
}
