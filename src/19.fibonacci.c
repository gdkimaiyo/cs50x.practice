// Using recursion, display the nth term of a Fibonacci sequence
// Fibonacci sequence is defined as:
// 1. The first element is zero => 0
// 2. The second element is 1
// 3. The third element and onwards is found by adding together the last two
// elements before it.
// i.e nth term = (n-1)th term + (n-2)th term

#include <cs50.h>
#include <stdio.h>

int getInteger(void);
int fibonacci(int n);

int main(void) {
  int n = getInteger();

  printf("The %ith term: %i\n", n, fibonacci(n));
}

int fibonacci(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}

int getInteger(void){
  int number;
  do {
    number = get_int("Posotion of fibonacci term: ");
  } while (number < 1);

  return number;
}
