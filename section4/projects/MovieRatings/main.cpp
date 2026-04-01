#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

    vector<string> names;
    vector<double> ratings;

    for (int i = 0; i < 5; i++) {
        string title;
        cout << "Enter a movie title: ";
        getline(cin >> ws, title);
        names.push_back(title);

        double rating;
        cout << "What would you rate the movie out of 10? ";
        cin >> rating;
        cin.get(); //Consume newline character, preventing accidentally taking empty line as input
        ratings.push_back(rating);
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << "You rated " << names[i] << " a " << ratings[i] << "/10." << endl;
    }

    return 0;
}