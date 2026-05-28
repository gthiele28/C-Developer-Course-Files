#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (!inFile) {
        cerr << "Problem opening the input file.  Exiting..." << endl;
        return 1;
    }

    int tempNum;
    
    while (inFile >> tempNum) {
        outFile << tempNum * 2 << endl;
    }

    inFile.close();
    outFile.close();
    cout << "Done" << endl;

    return 0;
}