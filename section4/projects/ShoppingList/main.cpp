#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

    cout << "Enter as many items as you need below, and type 'done' to quit: " << endl;

    vector<string> items;

    while (true) {
        string item;
        getline(cin, item);
        if (item == "done") {
            break;
        }
        items.push_back(item);
    }

    cout << endl;
    cout << "Your Completed Shopping List: " << endl;
    for (string item : items) {
        cout << "- " << item << endl;
    }

    return 0;
}