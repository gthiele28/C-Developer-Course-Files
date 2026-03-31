#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

    //Vectors can dynamically resize

    vector<int> someVec;
    vector<string> anotherVec(3);
    //the (3) is the starting size.  After these 3 spaces are filled,
    //functions like push_back must be used to add more elements dynamically.
    //push_back() adds elements to the end, like append() in python

    //push_back() can add elements dynamically
    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);

    cout << "SomeVec size: " << someVec.size() << endl;

    anotherVec[0] = "John";
    anotherVec[1] = "Bob";
    anotherVec[2] = "Sally";

    anotherVec.push_back("Shannon");

    for (int val : someVec) {
        cout << val << endl;
    }

    cout << endl;

    for (string s : anotherVec) {
        cout << s << endl;
    }

    //Vector methods:
    //front(): returns first element (at index 0)
    //back(): returns last element (at index size() - 1)
    //pop_back(): removes last element
    //insert(): inserts new element at specific index, requires an iterator to work
    //begin(): returns an iterator to the first element

    cout << endl;
    cout << "Front and back of anotherVec: " << endl;
    cout << "front: " << anotherVec.front() << endl;
    cout << "back: " << anotherVec.back() << endl;

    anotherVec.pop_back();

    //Pass an iterator to the first element, generated using the .begin() function
    //To insert at other positions: add the desired index to the begin()
    //i.e.: for index 2: anotherVec.begin() + 2
    //The below inserts at the front (index 0), think anotherVec.begin() = anotherVec.begin() + 0
    anotherVec.insert(anotherVec.begin(), "Don");

    cout << "\nAfter modifications: " << endl;
    cout << "front: " << anotherVec.front() << endl;
    cout << "back: " << anotherVec.back() << endl;

    //Arrays vs. Vectors:
    //Arrays: When size is known and will not change
    //Vectors: When size is dynamic and will change

    return 0;
}