#include <iostream>
using namespace std;

void countdown(int num);
int sumValues(int num);

int main () {
    
    // for (int i = 10; i >= 0; i--) {
    //     cout << i << endl;
    // }

    countdown(10);

    int totalSum = sumValues(10);
    cout << "The sum is: " << totalSum << endl;

    return 0;
}

void countdown(int num) {
    if (num >= 0) {
        cout << num << endl;
        countdown(num - 1);
    }
}

int sumValues(int num) {
    if (num > 1) {
        return num + sumValues(num - 1);
    }
    return num;  //base case
}