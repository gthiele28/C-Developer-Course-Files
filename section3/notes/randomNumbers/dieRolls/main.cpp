#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

    srand(time(nullptr));

    int dieVal;

    for (int i = 0; i < 10; i++) {
        dieVal = rand() % 6 + 1; //Dice roll values
        cout << "You rolled: " << dieVal << "!" << endl;
    }

    return 0;
}