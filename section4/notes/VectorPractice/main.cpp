#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

    vector<string> pets(3);

    pets[0] = "Dog";
    pets[1] = "Cat";
    pets[2] = "Fish";

    pets.push_back("Horse");
    pets.push_back("Lizard");

    pets.insert(pets.begin() + 2, "John Baugh");
    pets.pop_back();

    cout << "Contents of Vector Pets:" << endl;
    for (string s : pets) {
        cout << s << endl;
    }

    return 0;
}