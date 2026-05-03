#include <iostream>
using namespace std;

double average(double a, double b, double c);

int main() {

    double result = average(0.5, 1.5, 2.5);
    cout << "The result is: " << result << endl;

    return 0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}