#include "Dog.h"
#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;

int main() {

    try { 
        Dog poodle("Poodle");
    } catch (const runtime_error& err) {
        cout << err.what() << endl;
    }

    return 0;
}