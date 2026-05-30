#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);

int main() {

    vector<int> myVector;

    fillVector(myVector);
    printVector(myVector);
    countFives(myVector);

    cout << endl;
    cout << "Replacing 5s with 99s.. " << endl;

    replace(myVector.begin(), myVector.end(), 5, 99);

    printVector(myVector);
    countFives(myVector);

    //Challenge: use STL's sort() algorithm on myVector
    cout << endl;
    cout << "Sorting..." << endl;

    sort(myVector.begin(), myVector.end());

    printVector(myVector);
    countFives(myVector);

    return 0;
}

void fillVector(vector<int>& myVector) {
    srand(time(nullptr));
    for (int i = 0; i < 20; i++) {
        myVector.push_back(rand() % 5 + 1); //random numbers 1-5
    }
}

void printVector(const vector<int>& myVector) {
    for (int value : myVector) {
        cout << value << " ";
    }
    cout << endl;
}

void countFives(const vector<int>& myVector){
    int countOfFives = count(myVector.begin(), myVector.end(), 5);
    cout << "Number of 5s: " << countOfFives << endl;
}
