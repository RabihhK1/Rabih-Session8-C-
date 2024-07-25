#include <iostream>
#include "Book.h" // Assuming the class definitions are in a file named "Book.h"

int main() {
    try {
        // Create a Book object
        Book book1(1234, "C++ Programming", "Bjarne Stroustrup", 1376, "Programming");
        cout << book1.toString() << endl;

        // Modify the Book object
        book1.setId(5678);
        book1.setTitle("The C++ Standard Library");
        book1.setAuthor("Nicolai M. Josuttis");
        book1.setPageCount(1120);
        book1.setGenre("Programming");
        cout << "\nModified Book Details:\n" << book1.toString() << endl;

        // Check for invalid ID
        book1.CheckID(99999); // This should trigger the exception and display an error message

        // Create an EBook object
        EBook ebook(1234, "Effective C++", "Scott Meyers", 320, "Programming", 5);
        cout << "\nEBook Details:\n" << ebook.toString() << endl;

        // Modify the EBook object
        ebook.setFileSize(10);
        cout << "\nModified EBook Details:\n" << ebook.toString() << endl;

        // Check for invalid ID in EBook
        ebook.CheckID(999); // This should trigger the exception and display an error message

    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
