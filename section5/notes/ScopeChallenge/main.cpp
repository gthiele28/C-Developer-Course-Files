#include <iostream>
using namespace std;

int counter = 0;

void modifyGlobal();

int main() {

    cout << "Before loop: " << counter << endl;

    for (int i = 0; i < 100; i++){
        modifyGlobal();
    }

    cout << "After loop: " << counter << endl;

    return 0;
}

void modifyGlobal() {
    counter++;
}