#include <iostream>
#include "Sundae.h"
using namespace std;

int main () {

    Sundae test("Mint Chip");

    test.printSundae();

    test.addTopping("whipped cream");
    test.printSundae();

    test.addTopping("hot fudge");
    test.printSundae();

    return 0;
}