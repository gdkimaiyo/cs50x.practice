// Accessing Memory Address in C
// ampersand sign & for Accessing the Address of a variable => Get the Address
// asterisk sign * get what is stored in a Memory Address

#include <stdio.h>

int main(void) {
  int n = 12;

  printf("Actual value of n: %i\n", n);
  printf("Memory address of n: %p\n", &n);
  printf("Actual value of n using *: %i\n", *&n);
}
