#include <iostream>
#include <string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
bool cellOpen(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);

int main() {

    runGame();

    return 0;

} //end main

void runGame() {
    string gameBoard[3][3] = {
        {" ", " ", " "},
        {" ", " ", " "},
        {" ", " ", " "}
    };
    string winner = "None";
    bool xTurn = true; //When true, place an 'O', otherwise, place an 'X'
    int theRow = 0;
    int theCol = 0;

    cout << "Game Initialized" << endl;

    printCurrentBoard(gameBoard);
    
    //testing lines
    // cout << cellOpen(0, 0, gameBoard) << endl;
    // cout << cellOpen(1, 1, gameBoard) << endl;
    // cout << getWinner(gameBoard) << endl;
    // cout << isBoardFull(gameBoard) << endl;

    //game loop
    while (!isBoardFull(gameBoard) && winner == "None") {
        if (xTurn) {
            cout << "X's Turn" << endl;
        } else {
            cout << "O's Turn" << endl;
        }
        
        getUserInput(xTurn, gameBoard);
        cout << endl;

        printCurrentBoard(gameBoard);
        winner = getWinner(gameBoard);
        xTurn = !xTurn;
    }

    if (isBoardFull(gameBoard) && winner == "None") {
        cout << "Tie!" << endl;
    } else {
        cout << "Player " << winner << " wins!" << endl;
    }
}

void getUserInput (bool xTurn, string gameBoard[ROWS][COLS]) {
    int row = -1;
    int col = -1;
    bool keepAsking = true;

    while (keepAsking) {
        cout << "enter row and column (from 0-2) separated by a space" << endl;
        cin >> row;
        cin >> col;
        if (row >= 0 && col >= 0 && row < ROWS && col < COLS && cellOpen(row, col, gameBoard)) {
            keepAsking = false;
        } else {
            cout << "either the spot is taken or your input was out of range!" << endl;
        }
    }

    if (xTurn) {
        gameBoard[row][col] = "X";
    } else {
        gameBoard[row][col] = "O";
    }
}

void printCurrentBoard(string gameBoard[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++){
        cout << " " << gameBoard[i][0] << " | " << gameBoard[i][1] << " | " << gameBoard[i][2] << endl;
        if (i != (ROWS - 1)){
            cout << "-----------" << endl;
        }
    }
}

bool cellOpen(int row, int col, string gameBoard[ROWS][COLS]) {
    return gameBoard[row][col] == " "; //true if open, false if full
}

bool isBoardFull(string gameBoard[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (cellOpen(i, j, gameBoard)) {
                return false;
            }
        }
    }
    return true;
}

string getWinner(string gameBoard[ROWS][COLS]) { //returns only "X" or "Y"
    //check rows (loop thru all 3)
    for (int i = 0; i < ROWS; i++) {
        if ((gameBoard[i][0] == gameBoard[i][1]) && (gameBoard[i][0] == gameBoard[i][2]) && (gameBoard[i][0] != " ")) {
            return gameBoard[i][0];
        }
    }


    //check columns (loop thru all 3)
    for (int i = 0; i < COLS; i++) {
        if ((gameBoard[0][i] == gameBoard[1][i]) && (gameBoard[0][i] == gameBoard[2][i]) && (gameBoard[0][i] != " ")) {
            return gameBoard[0][i];
        }
    }

    //check diagonals (just need 2 if statements)
    if ((gameBoard[0][0] == gameBoard[1][1]) && (gameBoard[0][0] == gameBoard[2][2]) && (gameBoard[0][0] != " ")) {
        return gameBoard[0][0];
    }

    if ((gameBoard[0][2] == gameBoard[1][1]) && (gameBoard[0][2] == gameBoard[2][0]) && (gameBoard[0][2] != " ")) {
        return gameBoard[0][2];
    }

    return "None";
}
