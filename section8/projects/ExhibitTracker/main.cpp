#include <iostream>
#include <string>
#include "Exhibit.h"
using namespace std;

int main () {
    const int ARR_SIZE = 3; 
    Exhibit *exhibitPtrs[ARR_SIZE] = {new Exhibit("Exhibit 1", 1, 1.5), 
                                      new Exhibit("Exhibit 2", 2, 3.2), 
                                      new Exhibit("Exhibit 3", 3, 4.8)};

    for (int i = 0; i < ARR_SIZE; i++) {
        cout << "Exhibit #" << (i + 1) << endl;
        cout << "\tname: " << exhibitPtrs[i]->getName() << endl;
        cout << "\troom: " << exhibitPtrs[i]->getRoomNumber() << endl;
        cout << "\tsize: " << exhibitPtrs[i]->getDisplaySize() << endl;
        cout << endl;
    }

    //free up memory
    for (int i = 0; i < ARR_SIZE; i++) {
        delete exhibitPtrs[i];
        exhibitPtrs[i] = nullptr;
    }
}