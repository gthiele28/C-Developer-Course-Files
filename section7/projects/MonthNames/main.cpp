#include <iostream>
#include <stdexcept>
#include <string>
#include <array>
using namespace std;

string getMonthName(int monthNum);

int main () {

    cout << getMonthName(1) << endl;
    cout << getMonthName(5) << endl;
    cout << getMonthName(8) << endl;
    cout << getMonthName(12) << endl;
    //cout << getMonthName(0) << endl;
    cout << getMonthName(13) << endl;

    return 0;
}

string getMonthName(int monthNum) {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July",
                            "August", "September", "October", "November", "December"};
    
    if (monthNum >= 1 && monthNum <= 12) {
        return months[monthNum - 1];
    } else {
        throw out_of_range("Month must be between 1 and 12");
    }
}
