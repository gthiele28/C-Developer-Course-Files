#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

int main () {
    // Student test("John", "Smith", 3.5);
    // cout << test.getFullName() << endl;
    // cout << test.getGPA() << endl;

    ifstream inFile("students.txt");
    if (!inFile) {
        cerr << "No file found" << endl;
        return 1;
    }

    string fname;
    string lname;
    double gpa;

    vector<Student*> roster;

    while (inFile >> fname && inFile >> lname && inFile >> gpa) {
        // cout << fname << " " << lname << ": " << gpa << endl;
        if (gpa >= 0.0 && gpa <= 4.0) {
            Student *s = new Student(fname, lname, gpa);
            roster.push_back(s);
        }
    }

    inFile.close();

    cout << "Student Data: " << endl;
    
    for (Student *s : roster) {
        cout << "    " << s->getFullName() << ": " << s->getGPA() << endl;
    }

    cout << endl;

    //cleanup
    for (Student *s : roster) {
        delete s;
    }

    roster.clear();

    return 0;
}