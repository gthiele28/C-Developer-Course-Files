/*
Interactive game of rock-paper-scissors vs computer which selects random value.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

    srand(time(nullptr));


    bool loopChecker = true;
    char move;

    while (loopChecker) {
        
        cout << "Rock, Paper, or Scissors?" << endl;
        cin >> move;

        switch (move) {
            case 'R':
            case 'r':
            case 'P':
            case 'p':
            case 'S':
            case 's':
                cout << "Got it" << endl;
                loopChecker = false;
                break;
            default:
                cout << "Invalid Input.  Try Again.";
                break;
        }
    }

    int cpuMove = rand() % 3; //0 means rock, 1 means paper, 2 means scissors

    if (((move == 'R' || move == 'r') && cpuMove == 1) || ((move == 'P' || move == 'p') && cpuMove == 2) || ((move == 'S' || move == 's') && cpuMove == 0)) {
        cout << "You lost" << endl;
    } else if (((move == 'R' || move == 'r') && cpuMove == 2) || ((move == 'P' || move == 'p') && cpuMove == 0) || ((move == 'S' || move == 's') && cpuMove == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "Tie!" << endl;
    }

    return 0;
}