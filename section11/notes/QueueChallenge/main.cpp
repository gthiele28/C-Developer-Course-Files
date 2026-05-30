#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main () {
    queue<string> names;

    names.push("1");
    names.push("3");
    names.push("4");
    names.push("8");
    names.push("11");

    while (!names.empty()) {
        cout << names.front() << endl;
        names.pop();
    }

    return 0;
}
