#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, string> contacts;

    contacts["John Baugh"] = "313-555-5555";
    contacts["Bob Robinson"] = "734-555-5050";
    contacts["Sally Snorkle"] = "810-555-8888";

    //Does same thing as the loop below
    // for (pair<string, string> element : contacts) {
    //     cout << element.first << ": " << element.second << endl;
    // } 

    for (auto element : contacts) {
        cout << element.first << ": " << element.second << endl;
    }

    return 0;
}