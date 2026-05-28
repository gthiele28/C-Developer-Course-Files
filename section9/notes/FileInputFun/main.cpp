#include <iostream>
#include <fstream>
using namespace std;

int main () {

    int inputNum;
    int sum = 0;

    ifstream infile("input.txt");

    if (!infile) {
        cerr << "Could not open file." << endl;
        return 1;
    }

    //This is thought of as the best/safest way
    //while (!infile.eof) can cause bad reads on the last line, so it's worse
    while (infile >> inputNum) { //each time, a number from infile is read into inputNum
        sum += inputNum;
    } //end while if inputNum is no longer being read into

    cout << "Sum of numbers is: " << sum << endl;

    infile.close();
    return 0;
}