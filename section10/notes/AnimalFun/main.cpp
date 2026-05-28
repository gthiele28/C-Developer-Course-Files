#include "Animal.h"
#include "Dog.h"
#include <string>
#include <iostream>
using namespace std;

int main () {

    Animal test("John", 50);
    Dog dog("Snoopy", 10, "Beagle");

    //Testing Animal Class
    cout << test.getName() << ": " << test.getWeight() << endl;

    test.setName("John2");
    test.setWeight(60);

    cout << test.getName() << ": " << test.getWeight() << endl;
    cout << test.makeNoise() << endl;

    cout << endl;

    //Testing Dog Class
    cout << "Dog's name: " << dog.getName() << endl;
    cout << "Dog's weight: " << dog.getWeight() << endl;
    cout << "Dog's noise: " << dog.makeNoise() << endl;
    dog.digHole();
    dog.chaseCat();

    return 0;
}