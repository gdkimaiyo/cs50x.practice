// Example showing using structs in C to store values of different kinds,
// in which it wouldn't have been possible in case of variables or arrays

// [ NOTE ] This example doesn't use cs50 library

#include <stdio.h>
#include <string.h>

typedef struct {
  char title[50];
  char author[50];
} Book;

int main() {
  Book books[3];

  // First Book Details
  strcpy(books[0].title, "C Programming");
  strcpy(books[0].author, "Gideon Kimaiyo");

  // Second Book Details
  strcpy(books[1].title, "JavaScript");
  strcpy(books[1].author, "Brian Yu");

  printf("Book 1\n");
  printf("Title: %s\n", books[0].title);
  printf("Author: %s\n", books[0].author);

  printf("Book 2\n");
  printf("Title: %s\n", books[1].title);
  printf("Author: %s\n", books[1].author);
}
