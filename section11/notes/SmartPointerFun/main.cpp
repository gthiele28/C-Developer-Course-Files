#include <iostream>
#include <memory>
using namespace std;

int main() {
    const int ARR_SIZE = 5;

    // unique_ptr<double> myDubPtr(new double);
    auto myArray = make_unique<int[]>(ARR_SIZE);
    unique_ptr<double> myDubPtr = make_unique<double>();
    *myDubPtr = 3.14;

    // for (int i = 0; i < ARR_SIZE; i++) {
    //     myArray[i] = i * 2;
    // } 

    // for (int i = 0; i < ARR_SIZE; i++) {
    //     cout << myArray[i] << endl;
    // } 

    cout << "Pointer value: " << *myDubPtr << endl;

    return 0;
}