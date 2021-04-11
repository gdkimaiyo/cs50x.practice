// C program to find / search if a number exists in an array or not

#include <stdio.h>

int main(void) {
  int numbers[] = {4, 7, 2, 5, 0};

  // Linear search
  for (int i = 0; i < 5; i++) {
    if (numbers[i] == 1) {
      printf("Found\n");
      return 0;
    }
  }

  // Show NOT FOUND! after looping through all numbers and not find the number
  printf("Not Found!\n");
  return 1;
}
