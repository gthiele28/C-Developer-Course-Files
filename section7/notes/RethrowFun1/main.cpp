#include <iostream>
#include <stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int num);

int main() {

    int input;

    try {
        cout << "Enter a number to process!" << endl;
        cin >> input;

        doSomething(input);
        cout << "Process completed successfully" << endl;
    } catch (const invalid_argument& err) {
        cout << "main says there is an error" << endl;
        cout << err.what() << endl;
    }
    
    return 0;
}

void processPositive(int num) {
    cout << "Welcome to the positive integer processor" << endl;

    if (num >= 0) {
        cout << "positive int received" << endl;
    } else {
        throw invalid_argument("Negative number passed in!");
    }
}

void doSomething(int num) {
    try {
        processPositive(num);
        cout << "Could work" << endl;
    } catch (const invalid_argument& err) {
        cout << "doSomething found a problem" << endl;
        throw; //rethrows the error up to main (propagation), keeps same type + data
    }
}