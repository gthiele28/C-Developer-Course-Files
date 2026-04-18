#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num1);

//THE PARAMETER LIST MUST BE DIFFERENT FOR THIS TO WORK

int main () {

    int resultNum = getResult(30, 20);
    string nameResult = getResult("John", "Johns");
    int resultNum2 = getResult(5);

    cout << "Result Num: " << resultNum << endl;
    cout << "Results Name: " << nameResult << endl;
    cout << "Result Num 2: " << resultNum2 << endl;

    return 0;
}

int getResult (int num1, int num2) {
    return num1 * num2;
}

string getResult (string str1, string str2) {
    return str1 + ' ' + str2;
}

int getResult (int num1) {
    return num1 * num1 * num1;
}