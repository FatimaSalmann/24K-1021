#include <stdio.h>
#include <string.h>

// Book structure
struct Book {
    char title[100];       
    char author[100];       
    int publication_year;  
    float price;           
};

// Function to display all books in the library
void displayAllBooks(struct Book books[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].publication_year);
        printf("Price: %.2f\n", books[i].price);
        printf("---------------\n");
    }
}

// Function to search for a book by title
void searchBookByTitle(struct Book books[], int size, char title[]) {
    int found = 0;  // tracker for book found
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].title, title) == 0) {  // Compare titles
            printf("Found the book!\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].publication_year);
            printf("Price: %.2f\n", books[i].price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Sorry, the book with title '%s' was not found.\n", title);
    }
}

// Function to list all books by a specific author
void listBooksByAuthor(struct Book books[], int size, char author[]) {
    int found = 0;  // track if we find books by the author
    printf("Books by %s:\n", author);
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].author, author) == 0) {  // Compare authors
            printf("Title: %s\n", books[i].title);
            printf("Year: %d\n", books[i].publication_year);
            printf("Price: %.2f\n", books[i].price);
            printf("---------------\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by %s.\n", author);
    }
}

int main() {
    // array of books
    struct Book books[] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99},
        {"1984", "George Orwell", 1949, 8.99},
        {"To Kill a Mockingbird", "Harper Lee", 1960, 12.99},
        {"Moby-Dick", "Herman Melville", 1851, 15.50},
        {"Animal Farm", "George Orwell", 1945, 6.99}
    };
    
    int size = sizeof(books) / sizeof(books[0]);  // number of books
    
    displayAllBooks(books, size);

    // Search for a book by title
    char title[100];
    printf("Enter the title of the book to search for: ");
    fgets(title, 100, stdin);  // Get input from user
    title[strcspn(title, "\n")] = '\0';  // Remove the trailing newline
    searchBookByTitle(books, size, title);

    // List books by author
    char author[100];
    printf("Enter the author's name to list their books: ");
    fgets(author, 100, stdin);  // Get input from user
    author[strcspn(author, "\n")] = '\0';  // Remove the trailing newline
    listBooksByAuthor(books, size, author);

    return 0;
}

