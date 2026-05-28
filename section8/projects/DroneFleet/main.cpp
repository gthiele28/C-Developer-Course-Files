#include <iostream>
#include <string>
#include "Drone.h"
using namespace std;

int main () {
    int DRONE_NUM;

    cout << "How many drones are there? ";
    cin >> DRONE_NUM;

    cout << "Creating " << DRONE_NUM << " drones..." << endl;

    Drone **dronePtrs = new Drone* [DRONE_NUM];

    for (int i = 0; i < DRONE_NUM; i++) {
        string droneName = "Drone #" + to_string(i + 1);
        dronePtrs[i] = new Drone(droneName, 100.0);
    }

    cout << "Drone Info: " << endl;
    for (int i = 0; i < DRONE_NUM; i++) {
        cout << "\t" << dronePtrs[i]->getModelName() << ": " <<
             dronePtrs[i]->getBatteryLife() << "% battery" << endl;
    }

    for (int i = 0; i < DRONE_NUM; i++) {
        delete dronePtrs[i];
        dronePtrs[i] = nullptr;
    }

    delete[] dronePtrs;
}