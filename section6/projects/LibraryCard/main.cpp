#include "LibraryCard.h"
#include <string>
#include <iostream>
using namespace std;

void printDetails(const LibraryCard& card);

int main () {

    LibraryCard tester("test");

    cout << "name: " << tester.getCardholderName() << endl;
    cout << "books out: " << tester.getBooksCheckedOut() << endl;

    tester.checkoutBook();
    tester.checkoutBook();
    tester.checkoutBook();

    cout << "after checking out 3: " << tester.getBooksCheckedOut() << endl;

    tester.returnBook();
    tester.returnBook();

    cout << "after returning 2: " << tester.getBooksCheckedOut() << endl;

    tester.returnBook();
    tester.returnBook();

    cout << "after returning 2 more: " << tester.getBooksCheckedOut() << endl;

    printDetails(tester);

    return 0;
}

void printDetails(const LibraryCard& card) {
    cout << "This card belongs to " << card.getCardholderName() << ", who has "
         << card.getBooksCheckedOut() << " book(s) checked out" << endl;
}