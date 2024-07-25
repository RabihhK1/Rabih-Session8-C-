#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Book {
private:
    int* ID;
    string* title;
    string* author;
    int* pageCount;
    string* genre;
    string* availability;

public:
    Book(int id, string title, string author, int pageCount, string genre);
    Book();
    Book(const Book& other);
    virtual ~Book();

    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    int getPageCount() const;
    string getGenre() const;
    string getAvailability() const;

    void setId(int id);
    void setTitle(string t);
    void setAuthor(string a);
    void setPageCount(int n);
    void setGenre(string t);
    void setAvailability(string x);

    virtual string toString() const;
    void CheckID(int x);
};

class EBook : public Book {
private:
    int* fileSize;

public:
    EBook(int id, string title, string author, int pageCount, string genre, int fileSize);
    EBook();
    EBook(const EBook& other);
    ~EBook();

    int getFileSize() const;
    void setFileSize(int fs);

    string toString() const override;
};

#endif // BOOK_H
