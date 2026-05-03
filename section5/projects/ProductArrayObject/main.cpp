#include <iostream>
#include <array>
using namespace std;

int productArray(array<int, 6> myArray);

int main() {

    array<int, 6> arr{1, 2, 3, 4, 5, 6};
    int result = productArray(arr);

    cout << "The result is: " << result << endl;

    return 0;
}

int productArray(array<int, 6> myArray) {
    int prod = 1;
    for(int i = 0; i < myArray.size(); i++) {
        prod *= myArray[i];
    }
    return prod;
}