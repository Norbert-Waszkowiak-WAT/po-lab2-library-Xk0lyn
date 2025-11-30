#include "library.h"
#include <iostream>

Library::Library() : books(nullptr), count(0) {}

Library::~Library() {

    for (int i = 0; i < count; i++) {
        delete books[i];
    }

    
    delete[] books;

    std::cout << "Usuwam biblioteke" << std::endl;
}

void Library::addBook(Book* book) {
    
    Book** newArray = new Book*[count + 1];

   
    for (int i = 0; i < count; i++) {
        newArray[i] = books[i];
    }

    
    newArray[count] = book;

   
    delete[] books;

   
    books = newArray;
    count++;
}

void Library::removeBook(int index) {
    if (index < 0 || index >= count) {
        std::cout << "Bledny indeks!" << std::endl;
        return;
    }

    
    delete books[index];

    
    for (int i = index; i < count - 1; i++) {
        books[i] = books[i + 1];
    }

    count--;
}

Book** Library::getBooks() const {
    return books;
}

int Library::getCount() const {
    return count;
}
