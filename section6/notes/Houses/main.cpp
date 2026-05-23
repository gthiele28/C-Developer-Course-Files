#include <iostream>
#include <string>
using namespace std;

//------------- PROTOTYPE
void printHouseData(House myHouse);

//------------- HOUSE CLASS
class House {
    public:
    //"Setters"
        void setNumStories(int numStories) {
            this->numStories = numStories;
        }

        void setNumWindows(int numWindows) {
            this->numWindows = numWindows;
        }

        void setColor (string color) {
            this->color = color;
        }

    //"Getters"
        int getNumStories() const { //const: this method won't change any class data
            return numStories;
        }

        int getNumWindows() const {
            return numWindows;
        }

        string getColor() const {
            return color;
        }

    private:
        int numStories;
        int numWindows;
        string color;

}; //Note the semicolon is required

//------------- MAIN FUNCTION
int main () {

    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    //Manual Version
    // cout << "My house is " << myHouse.getColor() << " and has "
    //      << myHouse.getNumStories() << " stories and " 
    //      << myHouse.getNumWindows() << " windows." << endl;

    // cout << "Your house is " << yourHouse.getColor() << " and has "
    //      << yourHouse.getNumStories() << " stories and " 
    //      << yourHouse.getNumWindows() << " windows." << endl;

    // Global Function-Based Version
    printHouseData(myHouse, "My");
    printHouseData(yourHouse, "Your");

    return 0;
}

//------------- GLOBAL FUNCTIONS

//Challenge: make a function to print house data, then use it in main
//(replace manual version used currently)
void printHouseData(House myHouse, string houseName) {
    cout << houseName << " house is " << myHouse.getColor() << " and has "
         << myHouse.getNumStories() << " stories and " 
         << myHouse.getNumWindows() << " windows." << endl;
}