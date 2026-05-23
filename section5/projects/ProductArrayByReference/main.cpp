#include <iostream>
#include <array>
using namespace std;

void productArray(array<int, 6> myArray, int& result);

int main() {

    array<int, 6> nums{1, 2, 3, 4, 5, 6};
    int result = 100;

    productArray(nums, result);

    cout << result << endl;

    return 0;
}

void productArray(array<int, 6> myArray, int& result) {
    result = 1;
    
    for (int num : myArray) {
        result *= num;
    }

}