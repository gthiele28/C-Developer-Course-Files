#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

int main () {
    
    vector<int> myNums;
    
    try {
        //this will throw a length error
        myNums.resize(myNums.max_size() + 1);
        cout << "Yay big vector!" << endl;
    } catch (const length_error& ex) {
        //cerr: standard error, slightly different to cout and convention for this type of text
        cerr << "Caught a length error: " << ex.what() << endl;
    }

    return 0;
}
