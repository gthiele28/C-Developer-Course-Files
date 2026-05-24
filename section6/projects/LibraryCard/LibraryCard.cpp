#include "LibraryCard.h"
#include <iostream>
#include <string>
using namespace std;

//Constructor
LibraryCard::LibraryCard(string cardholderName) {
    this->cardholderName = cardholderName;
    this->booksCheckedOut = 0;
}

//Getters
string LibraryCard::getCardholderName() const {
    return cardholderName;
}

int LibraryCard::getBooksCheckedOut() const {
    return booksCheckedOut;
}

//Other
void LibraryCard::checkoutBook() {
    booksCheckedOut++;
}

void LibraryCard::returnBook() {
    if (booksCheckedOut > 0){
        booksCheckedOut--;
    }
}
