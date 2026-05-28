#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

int main () {
    ifstream inFile("genres.txt");
    if (!inFile) {
        cerr << "Unable to locate file" << endl;
        return 1;
    }

    map<string, int> genreCounts;

    string genre;
    double total = 0.0;

    while (inFile >> genre) {
        genreCounts[genre]++;
        total++;
    }

    cout << total << endl;

    cout << "Genre Distribution:" << endl;

    for (const auto& pair : genreCounts) {
        double percent = (pair.second / total) * 100;
        cout << "    " << pair.first << ": " << percent << "%" << endl;
    }
    
    cout << endl;

    inFile.close();
}