// Program to swap elements in an array by reflecting elements horizontally

#include <stdio.h>

const int SIZE = 5;
// swap function prototype
void swap(int *a, int *b);

int main(void) {
  int nums[SIZE];

  // Populate array elements
  for (int i = 0; i < SIZE; i++) {
    printf("Element[%i]: ", i);
    scanf("%i", &nums[i]);
  }

  printf("Before reflection\n");
  for (int i = 0; i < SIZE; i++) {
    printf("%i ", nums[i]);
  }
  printf("\n");

  int iterations = (SIZE % 2 == 0) ? SIZE / 2 : (SIZE - 1) / 2;
  printf("iterations: %i\n", iterations);

  for (int i = 0; i < iterations; i++) {
    // Swap values
    swap(&nums[i], &nums[SIZE - (i + 1)]);
  }

  printf("After reflection\n");
  for (int i = 0; i < SIZE; i++) {
    printf("%i ", nums[i]);
  }
  printf("\n");
}

// Swap function declaration
// function call by reference
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
