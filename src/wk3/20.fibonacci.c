// Using recursion, display the first n terms of a Fibonacci sequence
// Fibonacci sequence is defined as:
// 1. The first element is zero => 0
// 2. The second element is 1
// 3. The third element and onwards is found by adding together the last two
// elements before it.
// i.e nth element = (n-1)th + (n-2)th

#include <cs50.h>
#include <stdio.h>

int getInteger(void);
void fibonacci(int n);

int main(void) {
  int terms = getInteger();
  fibonacci(terms);
}

void fibonacci(int n){
  int first = 0, second = 1;
  int next;
  for (int i = 1; i <= n; i++) {
    printf("%i, ", first);
    next = first + second;
    first = second;
    second = next;
  }
  printf("\n");
}

int getInteger(void){
  int number;
  do {
    number = get_int("How many fibonacci terms: ");
  } while (number < 1);

  return number;
}
