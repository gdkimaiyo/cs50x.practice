// Recursive Bubble Sort Algorithm > Sort in Ascending Order
// Recursion is the ability of a function to call itself
// After the first pass, the highest value is bubbled to the end
// Same applies in the second pass where the second highest element is moved
// (bubbled) to the second last end and so on ...
// For recursion to stop, there should be a base case > a condition, which when
// met, the recursive process terminates

#include <stdio.h>

#define SIZE 6

void arrayElements(int array[], int size);
void bubbleSort(int array[], int size);

int main(void) {
  // int numbers[SIZE] = {6, 3, 8, 5, 2, 7, 4, 1};
  int numbers[SIZE] = {5, 2, 1, 3, 6, 4};

  printf("Before Sorting\n");
  arrayElements(numbers, SIZE);

  // Recursive Bubble Sort Algorithm
  bubbleSort(numbers, SIZE);

  printf("After Sorting\n");
  arrayElements(numbers, SIZE);
}

void arrayElements(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%i ", array[i]);
  }
  printf("\n");
}

void bubbleSort(int array[], int size) {
  // base case
  if (size == 1) {
    return;
  }
  for (int i = 0; i < size - 1; i++) {
    if (array[i] > array[i+1]) {
      int swap = array[i];
      array[i] = array[i+1];
      array[i+1] = swap;
    }
  }

  // Print array elements after every swap pass
  printf("Swap pass\n");
  arrayElements(array, size);

  // Recur / Repeat for the remaining unsorted elements
  bubbleSort(array, size - 1);
}
