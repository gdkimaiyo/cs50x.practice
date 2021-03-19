// Introduction to Arrays
// Intead of storinf scores for different students in separate variables
// use one array variable to store all scores
// Array is a special kind of variable that stores many values under one name
// however, the values should be of the same kind

#include <cs50.h>
#include <stdio.h>

const int SIZE = 3;

float average(int size, int array[]);

int main(void) {
  // declare array scores, to store student scores
  int scores[SIZE];

  // Prompt for student scores
  for (int i = 0; i < SIZE; i++) {
    scores[i] = get_int("Score: ");
  }

  printf("Average: %f\n", average(SIZE, scores));
}

float average(int size, int array[]) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  // coerce the type of size so that it converts sum to float
  return sum / (float) size;
}
