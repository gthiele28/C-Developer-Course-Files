#include <iostream>
#include "Rectangle.h"
#include "RectangleHelper.h"
using namespace std;

void changeData(Rectangle& rect);

int main() {

    Rectangle r1(10, 25);
    cout << "r1 area: " << r1.area() << endl;

    changeData(r1);

    cout << "Now, r1 area: " << r1.area() << endl;

    RectangleHelper helper;
    helper.modifyRectangle(r1);

    cout << "After helper modifies, r1 area: " << r1.area() << endl;

    return 0;
}

void changeData(Rectangle& rect) {
    rect.length = 100;
    rect.width = 100;
}