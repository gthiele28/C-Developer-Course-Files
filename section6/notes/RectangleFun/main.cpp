#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {

    Rectangle r1;
    Rectangle r2(5.0, 2.0);

    cout << "r1 area: " << r1.area() << endl;
    cout << "r2 area: " << r2.area() << endl;

    r1.setLength(20);
    r1.setWidth(5);

    cout << "r1 length: " << r1.getLength() << endl;
    cout << "r1 width: " << r1.getWidth() << endl;

    cout << "r1 area (updated): " << r1.area() << endl;

    //Challenge: add + test a perimeter() method
    cout << "r1 perimeter: " << r1.perimeter() << endl;
    cout << "r2 perimeter: " << r2.perimeter() << endl;

    return 0;
}
