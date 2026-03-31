#include <iostream>
#include <array>
using namespace std;

int main () {

    array<double, 7> farenheit{}; //Defaults to 0

    for (int i = 0; i < farenheit.size(); i++) {
        cout << "Enter a temperature in Farenheit: ";
        cin >> farenheit[i];
    }

    for (int i = 0; i < farenheit.size(); i++) {
        cout << "Fahrenheit: " << farenheit[i] << endl;
        cout << "Celcius: " << (farenheit[i] - 32) * 5 / 9 << endl << endl;
    }

    return 0;
}