#include <iostream>
#include <string>
using namespace std;

int main () {

    string names[4] = { "Bob", "Sally", "John", "Ed" };

    for (int i = 0; i < 4; i++) {
        cout << names[i] << endl;
    }

    //Range-Based for loop: good when indices not important, will never exceed range
    //Can be safer/easier, use when possible
    for (string name : names) {
        cout << name << endl;
    }

    //auto keyword: forces c++ to guess data type of what it is given
    //standard for "modern c++": 2011 and later (compilers from before then will error) 
    for (auto name : names) {
        cout << name << endl;
    }

    return 0;
}