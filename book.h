#pragma once
#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    Book(std::string t, std::string a, std::string i);

    ~Book();

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const;
};
