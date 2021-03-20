// Selection Sort Algorithm
// Sort in descending order

#include <stdio.h>

#define SIZE 8

void arrayElements(int array[], int size);
void selectionSort(int array[], int size);

int main(void) {
  int numbers[SIZE] = {6, 3, 8, 5, 2, 7, 4, 1};

  printf("Before Sorting\n");
  arrayElements(numbers, SIZE);

  // Selection Sort Algorithm
  selectionSort(numbers, SIZE);

  printf("After Sorting\n");
  arrayElements(numbers, SIZE);
}

void arrayElements(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%i ", array[i]);
  }
  printf("\n");
}

void selectionSort(int array[], int size) {
  // Perform Selection Sort Algorithm
  // Perform Selection Sort Algorithm
  for (int i = 0; i < size - 1 ; i++) {
    // Set the minimum index to be the current iteration
    int max_index = i;
    // Find minimum number in the array from index i to SIZE
    for (int j = i; j < size; j++) {
      if (array[j] > array[max_index]) {
        max_index = j;
      }
    }
    // Swapping
    // Swap the maximum number with whatever number is in the current iteration
    int max = array[max_index];
    array[max_index] = array[i];
    array[i] = max;

    // Print array elements after every swap
    // arrayElements(array, size);
  }
}
