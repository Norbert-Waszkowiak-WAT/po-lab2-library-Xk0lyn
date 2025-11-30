#include "book.h"

Book::Book(std::string t, std::string a, std::string i)
    : title(t), author(a), isbn(i) {}

Book::~Book() {
    std::cout << "Usuwam ksiazke: " << title << std::endl;
}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getIsbn() const { return isbn; }
