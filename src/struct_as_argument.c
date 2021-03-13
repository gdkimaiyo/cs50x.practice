// This example shows a struct being passed to a function as an argument
// [ NOTE ] This example doesn't use cs50 library

#include <stdio.h>
#include <string.h>

typedef struct {
  char title[50];
  char author[50];
} Book;

void printBook(Book bks[]);

int main() {
  Book books[2];

  // First Book Details
  strcpy(books[0].title, "C Programming");
  strcpy(books[0].author, "Gideon Kimaiyo");

  // Second Book Details
  strcpy(books[1].title, "JavaScript");
  strcpy(books[1].author, "Brian Yu");
  
  printBook(books);
}

void printBook(Book bks[]) {
  for (int i = 0; i < 2; i++) {
    printf("Title: %s\n", bks[i].title);
    printf("Author: %s\n\n", bks[i].author);
  }
}
