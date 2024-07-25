#include "Book.h"

// Parameterized constructor
Book::Book(int id, string title, string author, int pageCount, string genre) {
    this->ID = new int(id);
    this->title = new string(title);
    this->author = new string(author);
    this->pageCount = new int(pageCount);
    this->genre = new string(genre);
    this->availability = new string("available");
}

// Default constructor
Book::Book() {
    this->ID = new int(0);
    this->title = new string("");
    this->author = new string("");
    this->pageCount = new int(0);
    this->genre = new string("");
    this->availability = new string("available");
}

// Copy constructor
Book::Book(const Book& other) {
    this->ID = new int(*other.ID);
    this->title = new string(*other.title);
    this->author = new string(*other.author);
    this->pageCount = new int(*other.pageCount);
    this->genre = new string(*other.genre);
    this->availability = new string(*other.availability);
}

// Destructor
Book::~Book() {
    delete ID;
    delete title;
    delete author;
    delete pageCount;
    delete genre;
    delete availability;
}

// Getter methods
int Book::getId() const {
    return *this->ID;
}

string Book::getTitle() const {
    return *this->title;
}

string Book::getAuthor() const {
    return *this->author;
}

int Book::getPageCount() const {
    return *this->pageCount;
}

string Book::getGenre() const {
    return *this->genre;
}

string Book::getAvailability() const {
    return *this->availability;
}

// Setter methods
void Book::setId(int id) {
    *this->ID = id;
}

void Book::setTitle(string t) {
    *this->title = t;
}

void Book::setAuthor(string a) {
    *this->author = a;
}

void Book::setPageCount(int n) {
    *this->pageCount = n;
}

void Book::setGenre(string t) {
    *this->genre = t;
}

void Book::setAvailability(string x) {
    *this->availability = x;
}

// toString method
string Book::toString() const {
    return "Book ID: " + to_string(*this->ID) + "\nTitle: " + *this->title + "\nAuthor: " + *this->author + "\nPage Count: " + to_string(*this->pageCount) + "\nGenre: " + *this->genre + "\nAvailability: " + *this->availability;
}

// CheckID method
void Book::CheckID(int x) {
    try {
        if (x < 1000 || x > 9999) {
            throw invalid_argument("Invalid ID. ID must be between 1000 and 9999.");
        }
        setId(x);
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
}

// EBook methods
EBook::EBook(int id, string title, string author, int pageCount, string genre, int fileSize) : Book(id, title, author, pageCount, genre) {
    this->fileSize = new int(fileSize);
}

EBook::EBook() : Book() {
    this->fileSize = new int(0);
}

EBook::EBook(const EBook& other) : Book(other) {
    this->fileSize = new int(*other.fileSize);
}

EBook::~EBook() {
    delete fileSize;
}

int EBook::getFileSize() const {
    return *this->fileSize;
}

void EBook::setFileSize(int fs) {
    *this->fileSize = fs;
}

string EBook::toString() const {
    return Book::toString() + "\nFile Size: " + to_string(*this->fileSize) + " MB";
}
