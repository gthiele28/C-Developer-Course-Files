#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
    //Testing Animal Class
    Animal test("John", 50);
    cout << test.getName() << ": " << test.getWeight() << endl;
    test.setName("John2");
    test.setWeight(60);
    cout << test.getName() << ": " << test.getWeight() << endl;
    cout << test.makeNoise() << endl;

    return 0;
}