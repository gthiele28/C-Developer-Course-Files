/*
    Project Requirements:

    Collect full name, alias, age, agent level, and 
    favorite gadget from user
    Format it into a stylized output that looks 
    like an id card
*/

#include <iostream>
#include <string>
using namespace std;

int main () {

    string fullName;
    string alias;
    int age;
    int level;
    string favoriteGadget;

    cout << "Full Name: " << endl;
    getline(cin, fullName);

    cout << "Alias: " << endl;
    getline(cin, alias);

    cout << "Age: " << endl;
    cin >> age;
    cin.get(); //remove newline

    cout << "Level (1-10): " << endl;
    cin >> level;
    cin.get(); //remove newline

    cout << "Favorite Gadget: " << endl;
    getline(cin, favoriteGadget);

    //Copied from his video with my variable names, didn't feel like writing my own formatting
    cout << "============================" << endl;
	cout << "   S.E.C.R.E.T.  A.G.E.N.T." << endl;
	cout << "============================" << endl;
	cout << "Agent Name: " << fullName << endl;
	cout << "Alias: " << alias << endl;
	cout << "Age: " << age << endl;
	cout << "Level: " << level << endl;
	cout << "Preferred Gadget: " << favoriteGadget << endl;
	cout << "============================" << endl;
	cout << "Mission Status: CLASSIFIED" << endl;

    return 0;
}