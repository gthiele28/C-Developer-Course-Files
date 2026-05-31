#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

    vector<int> nums{ 1, 2, 3, 4, 5, 6 };

    cout << "Original Vector: " << endl;
    for (int n : nums) {
        cout << "   " << n << endl;
    }
    cout << endl;

    //Another way to loop thru a vector
    //This loop removes even numbers

    //Safe version (unsafe commented below)
    for (auto it = nums.begin(); it != nums.end();) {
        if (*it % 2 == 0) {
            it = nums.erase(it);
        } else {
            ++it;
        }
    }

    cout << "After removing even numbers: " << endl;
    for (int n : nums) {
        cout << "   " << n << endl;
    }
    cout << endl;


    //Don't do this: modifies container while it is being ranged over: very bad
    //Can potentially cause undefined behavior
    // for (int n : nums) {
    //     if (n % 2 == 0) {
    //         nums.erase(remove(nums.begin(), nums.end(), n), nums.end());
    //     }
    // }

    return 0;
}