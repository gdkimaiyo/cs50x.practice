// The Collatz conjecture speculates that it is always possible to get back to
// 1 if:
// > if n is 1, stop.
// > otherwise, if n is even, repeat this process on n/2
// > otherwise, if n is odd, repeat this process on 3n + 1
// Collatz conjecture applies to positive integers

// This program calculates how many steps it takes to get to 1 from n using
// recursion collatz conjecture

#include <cs50.h>
#include <stdio.h>

int positiveInteger(void);
int collatz(int n);

int main(void) {
  int n = positiveInteger();

  printf("%i\n", collatz(n));
}
// Collatz conjecture
int collatz(int n) {
  // base case
  if (n == 1) {
    return 0;
  } else {
    if (n % 2 == 0) {
      return 1 + collatz(n/2);
    } else {
      return 1 + collatz((3 * n) + 1);
    }
  }
}

// function to get positive integer
int positiveInteger(void) {
  int number;
  do {
    number = get_int("Positive integer: ");
  } while (number < 1);

  return number;
}
