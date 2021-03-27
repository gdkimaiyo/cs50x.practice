// Program to swap to two numbers
// call by value, changes do not reflect outside of the function, although,
// changes happen inside of the function
// call by value copies the actual parameter into the formal parameter of the
// function

#include <stdio.h>

void swap(int a, int b);

int main(void) {
  int x = 12;
  int y = 7;

  printf("Before Swap::\n");
  printf("x = %i :: y = %i\n", x, y);
  printf("After Swap::\n");
  swap(x, y);
  printf("x = %i :: y = %i\n", x, y);
}

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
