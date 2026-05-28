#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main () {
    cout << "Writing to file..." << endl;

    ofstream outfile("output.txt");

    if (!outfile) {
        cerr << "Could not open file for writing" << endl;
        return 1; //non-zero return indicates an error was had
    }

    cout << fixed << showpoint;
    outfile << fixed << showpoint;

    for (int i = 1; i <= 10; i++) {
        double value1 = i * 7.7575;
        double value2 = i * 3.14159;

        cout << setw(12) << setprecision(2) << value1
             << setw(12) << setprecision(3) << value2 << endl;

        outfile << setw(12) << setprecision(2) << value1
                << setw(12) << setprecision(3) << value2 << endl;
    }

    // outfile << "Test" << endl;

    outfile.close();
    cout << "Done writing" << endl;

    return 0;
}