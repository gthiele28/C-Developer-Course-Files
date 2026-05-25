#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    
    Triangle test;

    cout << "Side A: " << test.getSideA() << endl;
    cout << "Side B: " << test.getSideB() << endl;
    cout << "Side C: " << test.getSideC() << endl;
    cout << "Area: " << test.area() << endl;
    cout << "Perimeter: " << test.perimeter() << endl;
    cout << "isValid: " << test.isValid() << endl;

    test.setSideA(3.0);
    test.setSideA(-1);

    test.setSideB(4.0);
    test.setSideB(-1);

    test.setSideC(5.0);
    test.setSideC(-1);

    cout << endl;
    cout << "Side A: " << test.getSideA() << endl;
    cout << "Side B: " << test.getSideB() << endl;
    cout << "Side C: " << test.getSideC() << endl;
    cout << "Area: " << test.area() << endl;
    cout << "Perimeter: " << test.perimeter() << endl;
    cout << "isValid: " << test.isValid() << endl;

    test.setSideA(20.0);

    cout << endl;
    cout << "Side A: " << test.getSideA() << endl;
    cout << "Side B: " << test.getSideB() << endl;
    cout << "Side C: " << test.getSideC() << endl;
    cout << "isValid: " << test.isValid() << endl;

    return 0;
}