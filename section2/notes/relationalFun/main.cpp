#include <iostream>
using namespace std;

int main () {

    /* 
        relational operators:
        > Greater than
        < Less than
        >= greater or equal to
        <= less or equal to
        == equal to
        != not equal to
    */

   cout << boolalpha;

   int a = 15;
   int b = 20;

   cout << (a < b) << endl;

   //equal to
   bool areEqual = (a == b);
   cout << areEqual << endl;

   /*
    challenge: create variable and set to age, then
    check if age is greater than or equal to 21
    Print result using cout
   */

    //Passes requirements (note usually this is done in second file so I reuse boolalpha for practice)
    int myAge = 20;
    bool amIOld = (myAge >= 21);
    cout << boolalpha << "Am I 21? " << amIOld << endl;
    
    return 0;

}