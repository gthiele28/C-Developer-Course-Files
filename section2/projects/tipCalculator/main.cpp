/*
PROJECT REQUIREMENTS:

Ask user for total bill amount, store it
Ask user for desired tip percentage
Calculate and output tip amount and total 
(including tip)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    double billAmount;
    double tipPercentage;

    //Given after I did the rest, locks output float length
    //to 2 decimal points (good for dollar amounts)
    cout << fixed << setprecision(2);

    cout << "How much was your bill? " << endl;
    cin >> billAmount;

    cout << "What percentage do you want to tip? " << endl;
    cin >> tipPercentage;

    cout << "On a bill of $" << billAmount << " with a tip of " << tipPercentage << "%:" << endl;
    cout << "You should tip $" << ((tipPercentage / 100) * billAmount) << ", resulting in" << endl;
    cout << "a total bill of " << (((tipPercentage / 100) * billAmount) + billAmount) << "!" << endl;

    //Only main difference between my solution and his is he used variables to store the math before the couts.

    return 0;
}