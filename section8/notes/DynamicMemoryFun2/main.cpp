#include <iostream>
#include "Dog.h"
using namespace std;

int main () {

    Dog *myDogPtr = new Dog("Rover", "German Shepherd");
    Dog *yourDogPtr = new Dog("Fido", "Beagle");

    //Note: arrow is generally the preferred way to access data in this case
    cout << "Using arrow operator: " << endl;
    cout << myDogPtr->getName() << " - " << myDogPtr->getBreed() << endl;
    cout << yourDogPtr->getName() << " - " << yourDogPtr->getBreed() << endl;

    //Note the parentheses, an error will be thrown without them
    cout << "Using dereference (*) and dot (.) operators" << endl;
    cout << (*myDogPtr).getName() << " - " << (*myDogPtr).getBreed() << endl;
    cout << (*yourDogPtr).getName() << " - " << (*yourDogPtr).getBreed() << endl;

    delete myDogPtr;
    delete yourDogPtr;

    return 0;
}