// C program to find / search if a number exists in an array or not

#include <stdio.h>
#include <string.h>

int main(void) {
  char *names[] = {"Nathan", "Roman", "David", "James", "Brian"};

  // Linear search
  for (int i = 0; i < 5; i++) {
    // compare two strings using strcmp()
    if (strcmp(names[i], "Yu") == 0) {
      printf("Found\n");
      return 0;
    }
  }

  // Show NOT FOUND! after looping through all numbers and not find the number
  printf("Not Found!\n");
  return 1;
}
