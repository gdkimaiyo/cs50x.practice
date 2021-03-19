// Using ternary operator
// to find the largest number:
// 1. Among 2 numbers
// 2. Among 3 numbers

#include<cs50.h>
#include<stdio.h>

int main(void) {
  // Declaration of variables
  int a, b, x, y, z, max, max2;

  // 1. Among 2 numbers
  printf("Input two numbers\n----------------\n");
  a = get_int("a: ");
  b = get_int("b: ");

  max = (a > b) ? a : b;

  printf("\n%i, %i : %i is the maximum\n", a,b,max);

  // 2. Among 3 numbers
  printf("\nInput three numbers\n----------------\n");
  x = get_int("x: ");
  y = get_int("y: ");
  z = get_int("z: ");

  max2 = (x > y) ? (x > z ? x : z) : (y > z ? y : z);

  printf("\n%i, %i, %i : %i is the maximum\n", x,y,z,max2);

  // NOTE: Equal numbers
  // For Equal numbers, both numbers are considered to be maximum
  // What's the best work around for this scenario?
}
