#include <fstream>
#include <iostream>
using namespace std;

int main () {
    ifstream inFile("salaries.txt");
    if (!inFile) {
        cerr << "Problem opening the input file.  Exiting..." << endl;
        return 1;
    }

    int currSalary;
    int totalEmployees = 0;
    int totalPayroll = 0;
    int averageSalary = 0;
    int highEarners = 0;

    while (inFile >> currSalary) {
        totalEmployees++;
        totalPayroll += currSalary;
        if (currSalary > 100000) {
            highEarners++;
        }
    }

    averageSalary = totalPayroll / totalEmployees;

    cout << "Company Data From Input File:" << endl;
    cout << "\tTotal Employees: " << totalEmployees << endl;
    cout << "\tTotal Payroll Cost: " << totalPayroll << endl;
    cout << "\tAverage Salary: " << averageSalary << endl;
    cout << "\tEmployees Making $100k+: " << highEarners << endl;
}
