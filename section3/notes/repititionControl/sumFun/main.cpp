/* 
    Challenge:
    1. Create a new project called SumFun
    2. Keep reading integers from user
    3. Add them to a running total
    4. Stop when user enters a negative number
    5. Print the sum to the user
*/

#include <iostream>
using namespace std;

int main () {

    int curr;
    int runningSum = 0;

    cout << "Enter a number to add it to the total, or a negative number to stop and get your result: ";
    cin >> curr;

    while (curr >= 0) {
        runningSum += curr;
        cout << "You inputted " << curr << " and your running subtotal is: " << runningSum << endl;
        cout << "Enter another number to add, or negative to quit: ";
        cin >> curr;
    }

    cout << "Negative number detected." << endl;
    cout << "Your total is: " << runningSum << endl;

    return 0;
}