// Test program to see if a variable can be re-assigned its current value

#include <stdio.h>

int main(void) {
  int n = 13;

  printf("Initial value of n: %i\n", n);

  // Re-assign n to its current value
  n = (n > 12) ? 12 : n;

  printf("Final value of n: %i\n", n);
}
