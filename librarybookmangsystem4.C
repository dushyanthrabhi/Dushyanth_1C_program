#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LENGTH 50
#define AUTHOR_LENGTH 50

typedef struct {
    int id;
    char title[TITLE_LENGTH];
    char author[AUTHOR_LENGTH];
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &library[bookCount].id);
    getchar(); // Consume newline character

    printf("Enter Book Title: ");
    fgets(library[bookCount].title, TITLE_LENGTH, stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = '\0';  

    printf("Enter Book Author: ");
    fgets(library[bookCount].author, AUTHOR_LENGTH, stdin);
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = '\0'; 

    bookCount++;
    printf("Book added successfully!\n");
}

void listBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("\nList of Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", library[i].id, library[i].title, library[i].author);
    }
}

void searchBook() {
    int searchId;
    printf("Enter Book ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == searchId) {
            printf("Book Found: ID: %d, Title: %s, Author: %s\n", library[i].id, library[i].title, library[i].author);
            return;
        }
    }

    printf("Book with ID %d not found.\n", searchId);
}

void menu() {
    printf("\nBook Management System\n");
    printf("1. Add Book\n");
    printf("2. List Books\n");
    printf("3. Search Book\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    do {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                listBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
