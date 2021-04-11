// Program to convert a string to upper case or lower case

#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void) {
  string str = get_string("Type a word: ");
  printf("\nBefore: %s\n", str);

  // Convert letter case
  // 1. Convert to UPPERCASE
  printf("UPPERCASE: ");
  for (int i = 0, len = strlen(str); i < len; i++) {
    printf("%c", toupper(str[i]));
  }
  
  // 2. Convert to lowercase
  printf("\nlowercase: ");
  for (int i = 0, len = strlen(str); i < len; i++) {
    printf("%c", tolower(str[i]));
  }

  printf("\n");
}
