#include <iostream>

using namespace std;

int main () {

    const int ARRAY_SIZE = 10;
    int nums[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        nums[i] = i + 1;
    }

    for (auto num : nums) {
        cout << num << endl;
    }

    return 0;
}