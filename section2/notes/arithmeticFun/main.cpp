#include <iostream>
using namespace std;

int main () {

    /*
    5 main operators:
    + addition
    - subtraction
    * multiplication
    / division
    % modulus (remainder)
    */

   int a = 10;
   int b = 3;

   int sum = a + b;
   int difference = a - b;
   int product = a * b;
   int quotient = a / b;
   int remainder = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    //Division in c++ returns an int if two ints are used, removing any decimal
    //To fix this, use doubles in division instead

    //Compound operators: a = a + 5 is the same as a += 5
    //Each of the operators above has a corresponding compound operator
    // +=, -=, *=, /=, %=

    //Increment/decrement operators:
    //To add one: ++
    //To subtract one: -- 

    int result = 10;
    result += 15; //result = result + 15
    cout << "Result: " << result << endl;

    /*
        Challenge:
        create variable myNum, set value to 10
        use compound operator to increase myNum by 5
        double its value on 3 separate lines
        print result
    */

   int myNum = 10;
   myNum += 5;
   myNum *= 2;
   myNum *= 2;
   myNum *= 2;
   cout << "myNum: " << myNum << endl;

   //The above satisfies the requirements, and gets desired answer of 120

    return 0;
}