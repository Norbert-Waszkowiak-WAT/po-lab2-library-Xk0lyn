#pragma once
#include "book.h"

class Library {
private:
    Book** books;   
    int count;     
public:
    Library();
    ~Library();

    void addBook(Book* book);
    void removeBook(int index);

    Book** getBooks() const;
    int getCount() const;
};
