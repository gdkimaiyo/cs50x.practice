// Program to demonstrate recursion
// C program to calculate the factorial of a number n

#include <cs50.h>
#include <stdio.h>

long int positiveInteger(void);
long int factorial(long int n);

int main(void) {
  long int n = positiveInteger();

  printf("%li\n", factorial(n));;
}

long int factorial(long int n) {
  long int fact;
  // base case
  if (n <= 1) {
    fact = 1;
  } else {
    fact = n * factorial(n-1);
  }

  return fact;
}

// function to get positive integer
long int positiveInteger(void) {
  long int number;
  do {
    number = get_int("Positive integer: ");
  } while (number < 0);

  return number;
}
