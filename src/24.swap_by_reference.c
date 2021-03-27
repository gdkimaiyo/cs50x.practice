// Program to swap to two numbers
// call by reference, changes do reflect outside of the function as well
// inside of the function
// call by reference, actual and formal parameters refer to same memory
// location

#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
  int x = 12;
  int y = 7;

  printf("Before Swap::\n");
  printf("x = %i :: y = %i\n", x, y);
  printf("After Swap::\n");
  // actual parameters passed in as addresses
  swap(&x, &y);
  printf("x = %i :: y = %i\n", x, y);
}

void swap(int *a, int *b) {
  // function / formal parameters declared as pointer types
  int temp = *a;
  *a = *b;
  *b = temp;
}
