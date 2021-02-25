/*
 * C program to prompt user to type a positive integer
 * Then find the summation of the numbers from 0 to that number
 * This program demonstrates abstraction and loops in C
 */
#include <cs50.h>
#include <stdio.h>

int getInteger(void);

int main(void) {
  int num = getInteger();
  int sum = 0;

  for (int i = 0; i <= num; i++) {
    sum += i;
  }
  // display the summation of numbers from 0 to the typed number
  printf("summation: %i\n", sum);
}

// function to get positive integer
int getInteger(void) {
  int n;
  do {
    n = get_int("Type a positive integer: ");
  } while (n < 1);

  return n;
}
