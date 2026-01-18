#include <iostream>
using namespace std;

int main () {

    int count = 0;

    /* Loop anatomy
    Parentheses: loop condition - If true, loop runs another iteration.  If false, loop exits.
    Body: In braces, code which is executed each iteration
    */

   //While loop (most basic)
   //Pre-test: test must be true BEFORE loop runs
    while (count < 10) {
        cout << "Count: " << count << endl;
        count++; //Prevent infinite loop by incrementing count
    }

    //Do-While loop: same as while loop, but always executes body at least once, even if loop condition is false
    //Post-test: Condition must be true AFTER loop runs before it starts again
    int counter2 = 100;
    do {
        cout << "Counter2: " << counter2 << endl; //Prints once even though 100 > 10!
        counter2++;
    } while (counter2 < 10);

    //For loop: similar to While loop, but bundles initialization, loop condition and incrementing into the loop condition!
    //Pre-test: must be true before, like while loops
    for (int i = 0; i < 10; i++) {
        //i, k, j, etc. common for this variable (but bad variable names anywhere else)
        //Loops through the same values as the above while loop, but easier to read/cleaner.
        cout << "I is: " << i << endl;
    }

    /* 
        Counter-controlled vs. sentinel-controlled
        
        The loops above are counter-controlled (a single numerical counter determines how many repititions, and is usually a single "flat" number
        By contrast, sentinel-controlled loops end when the user inputs a specific value (The "sentinel", i.e. "-1" or "quit"
    */

   //Sentinel-controlled loop example
    int input;
    cout << "Enter a non-negative integer (or a negative number) to quit: ";
    cin >> input; //Note this only works if we make sure to give input an initial value, or the loop throws an error since input can't pass
    //To avoid this issue, you could use a do-while loop instead, but then your printed text must always be the same!

    while (input >= 0) {
        cout << "You entered: " << input << endl; //On top so we can output first input before it gets overwritten by next value
        cout << "Enter another (or quit with a negative): ";
        cin >> input;
    }

    cout << "Negative number detected.  Goodbye!" << endl;
    //Let the user know we quit successfully before abruptly stopping program

    return 0;
}