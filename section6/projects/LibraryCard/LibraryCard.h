#ifndef LibraryCard_H
#define LibraryCard_H

#include <string>
using namespace std;

class LibraryCard {
    public:
        //Constructor
            LibraryCard(string cardholderName);

        //Getters
            string getCardholderName() const;
            int getBooksCheckedOut() const;

        //Other
            void checkoutBook();
            void returnBook();

    private:
        string cardholderName;
        int booksCheckedOut;
};

#endif
