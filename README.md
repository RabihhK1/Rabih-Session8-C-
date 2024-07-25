# Rabih-Session8-C-
# Book Management System

## Overview

The Book Management System is a C++ project that allows you to manage book information using a class-based approach. The system includes features for creating, modifying, and displaying book details, as well as handling errors related to book IDs. The project demonstrates concepts such as encapsulation, inheritance, polymorphism, dynamic memory management, and exception handling.

## Project Structure

The project consists of the following files:

- `Book.h`: Header file that contains the class declaration for `Book` and `EBook`.
- `Book.cpp`: Implementation file that provides the definitions for the `Book` class methods.
- `main.cpp`: Contains the main function to test the functionality of the `Book` and `EBook` classes.

## Classes

### `Book`

The `Book` class represents a book with attributes such as ID, title, author, page count, genre, and availability. It includes:

- **Constructors:**
  - `Book(int id, string title, string author, int pageCount, string genre)`: Parameterized constructor.
  - `Book()`: Default constructor.
  - `Book(const Book& other)`: Copy constructor.

- **Destructor:**
  - `~Book()`: Destructor to release dynamically allocated memory.

- **Member Functions:**
  - `int getId() const`: Get the book ID.
  - `string getTitle() const`: Get the book title.
  - `string getAuthor() const`: Get the book author.
  - `int getPageCount() const`: Get the page count.
  - `string getGenre() const`: Get the book genre.
  - `string getAvailability() const`: Get the availability status.
  - `void setId(int id)`: Set the book ID.
  - `void setTitle(string t)`: Set the book title.
  - `void setAuthor(string a)`: Set the book author.
  - `void setPageCount(int n)`: Set the page count.
  - `void setGenre(string t)`: Set the book genre.
  - `void setAvailability(string x)`: Set the availability status.
  - `string toString() const`: Return a string representation of the book.
  - `void CheckID(int x)`: Validate and set the book ID with exception handling.

### `EBook` (Derived from `Book`)

The `EBook` class inherits from `Book` and adds additional functionality specific to e-books:

- **Constructors:**
  - `EBook(int id, string title, string author, int pageCount, string genre, int fileSize)`: Parameterized constructor for e-books.
  - `EBook()`: Default constructor.
  - `EBook(const EBook& other)`: Copy constructor for e-books.

- **Destructor:**
  - `~EBook()`: Destructor to release dynamically allocated memory specific to e-books.

- **Member Functions:**
  - `int getFileSize() const`: Get the file size of the e-book.
  - `void setFileSize(int size)`: Set the file size of the e-book.
  - `string toString() const`: Return a string representation of the e-book, including its file size.

## Building the Project

To compile and build the project, follow these steps:

1. Ensure you have a C++ compiler installed (e.g., g++).
2. Open a terminal and navigate to the project directory.
3. Run the following command to compile the project:

   ```bash
   g++ Book.cpp main.cpp -o main
4.This will generate an executable file named main.

## Running the Project
To run the compiled program, use the following command:
   ```bash
    /main
```
## Example Output
When running the program, you should see output similar to this:

### Book Details

**Book ID:** 1234  
**Title:** C++ Programming  
**Author:** Bjarne Stroustrup  
**Page Count:** 1376  
**Genre:** Programming  
**Availability:** available  

### Modified Book Details

**Book ID:** 5678  
**Title:** The C++ Standard Library  
**Author:** Nicolai M. Josuttis  
**Page Count:** 1120  
**Genre:** Programming  
**Availability:** available  

**Error:** Invalid ID. ID must be between 1000 and 9999.

### EBook Details

**Book ID:** 1234  
**Title:** Effective C++  
**Author:** Scott Meyers  
**Page Count:** 320  
**Genre:** Programming  
**Availability:** available  
**File Size:** 5 MB  

### Modified EBook Details

**Book ID:** 1234  
**Title:** Effective C++  
**Author:** Scott Meyers  
**Page Count:** 320  
**Genre:** Programming  
**Availability:** available  
**File Size:** 10 MB  
**Error:** Invalid ID. ID must be between 1000 and 9999.


