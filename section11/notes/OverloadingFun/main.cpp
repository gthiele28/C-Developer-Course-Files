#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    
    Rectangle rect1(10, 20);
    Rectangle rect2(50, 100);
    Rectangle rect3(10, 20);
    Rectangle resultRect;

    resultRect = rect1 + rect2;

    cout << "Rect1 == Rect3? " << boolalpha << (rect1 == rect3) << endl;
    cout << "Rect1 != Rect2? " << boolalpha << (rect1 != rect2) << endl;

    cout << "ResultRect: " << resultRect.getLength() << " * "
         << resultRect.getWidth() << " = " << resultRect.area() 
         << endl;

    return 0;
}