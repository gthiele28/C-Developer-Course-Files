#include <iostream>
using namespace std;

void threeTimesN(int input, int& output);

int main() {

    int output = 10;

    cout << "Before calling threeTimesN: " << output << endl;
    threeTimesN(5, output);
    cout << "After calling threeTimesN: " << output << endl;

    return 0;
}

void threeTimesN(int input, int& output) {
    output = 3 * input;
}