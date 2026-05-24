#include "book.h"
#include <iostream>

//Constructor
Book::Book(string author, string title, string genre, int numPages) {
    this->author = author;
    this->title = title;
    this->genre = genre;
    this->numPages = numPages;
}

//Getters
string Book::getAuthor() const {
    return author;
}

string Book::getTitle() const {
    return title;
}

string Book::getGenre() const {
    return genre;
}

int Book::getNumPages() const {
    return numPages;
}

//Other (challenge)
void Book::printBookDetails() const {
    std::cout << title << " by " << author << " has " << numPages 
              << " pages and its genre is " << genre << std::endl;
}