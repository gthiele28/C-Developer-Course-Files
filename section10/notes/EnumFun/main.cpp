#include <iostream>
using namespace std;

int main() {
    //enum class: scoped, allowing for scope resolution keywords, better than normal
    //considered best practice
    enum Direction {UP, DOWN, LEFT, RIGHT, STANDING};

    //enum class example
    enum class OtherDirection {UP, DOWN, LEFT, RIGHT};
    OtherDirection myOtherDirection = OtherDirection::UP;

    Direction myDirection = STANDING;

    cout << myDirection << endl;

    if (myDirection == UP) {
        cout << "up!" << endl;
    } else if (myDirection == DOWN) {
        cout << "down!" << endl;
    } else if (myDirection == LEFT) {
        cout << "left!" << endl;
    } else if (myDirection == RIGHT) {
        cout << "right!" << endl;
    } else if (myDirection == STANDING) {
        cout << "standing!" << endl;
    }

    return 0;
}