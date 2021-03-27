// Program to increment a variable by 1
// Another example of call by reference
// Changes do reflect outside of the function and inside of the function

#include <stdio.h>

void increment(int *a);

int main(void) {
  int x = 12;

  printf("Before increment::\n");
  printf("x = %i\n", x);
  printf("After increment::\n");
  increment(&x);
  printf("x = %i\n", x);
}

void increment(int *a) {
  *a += 1;
}
