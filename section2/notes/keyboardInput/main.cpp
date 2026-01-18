#include <iostream>
#include <string>
using namespace std;

int main () {

    int age;
    string fullName;

    cout << "Please enter your age: " << endl;
    cin >> age; //Take input and assign to age.
    //Note the >> instead of << and cin, both referencing the
    //input stream rather than the output stream!

    cout << "You are " << age << " years old." << endl;

    // << only grabs up to whitespace, meaning it won't
    //get multi-word strings or multi-line.

    cout << "Please enter your full name: " << endl;
    
    cin.get(); 
    //If we don't do this, getLine collects the newline character
    //At the end of the previous cout (bc enter key creates newline and submits but previous
    // input only takes the number, leaving newline in the input stream)

    getline(cin, fullName);

    cout << "Hello, " << fullName << "." << endl;

    /* 
        Challenge: create 3 variables: fullName, location, initialScore
        Prompt User for each, using getline or cin
        Print the results using cout (format provided but im not copying it)
    */

   string fullNameAgain;
   string location;
   int initialScore;

   cout << "Please enter your full name (again): " << endl;
   getline(cin, fullNameAgain);

   cout << "Now, please enter your location: " << endl;
   getline(cin, location);

   cout << "What is your initial score? " << endl;
   cin >> initialScore;

   cout << "Hello, " << fullNameAgain << endl;
   cout << "We heard you are from " << location << endl;
   cout << "Your original score is " << initialScore << ", but with five points added, your score is " << (initialScore + 5) << "." << endl;

   //NOTE: Only use cin.get() to remove newline if the previous
   //Removal wasn't getline(), as getline removes that.  If you miss
   //The first character of an input, that's why!

    return 0;
}