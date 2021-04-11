// Pointers
// Every variable is a memory location and every memory location has its own
// address which can be accessed using ampersand & operator
// Pointer => is a variable whose value is the address of another variable
// ampersand sign & for Accessing the Address of a variable => Get the Address
// asterisk sign * get what is stored in a Memory Address

#include <stdio.h>

int main(void) {
  int n = 12;
  int *p = &n;

  printf("Actual value of n: %i\n", n);
  printf("Memory address of n using &: %p\n", &n);
  printf("Memory address of n using a pointer: %p\n", p);
}
