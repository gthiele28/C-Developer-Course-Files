#include <iostream>
#include <array>
using namespace std;

int main () {

    const int ARR_SIZE = 10;
    array<int, ARR_SIZE> nums{};

    for (int i = 0; i < nums.size(); i++) {
        nums[i] = 2 * i;
    }

    for (auto num : nums) {
        cout << num << endl;
    }

    cout << "total size: " << nums.size() << endl;

    return 0;
}