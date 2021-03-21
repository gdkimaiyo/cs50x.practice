// Bubble Sort Algorithm
// Sort in Descending Order
// After every pass, the smallest value is bubbled to the end
// hence no need of checking if it is sorted in the subsequent passes
// Meaning in every pass the number of checks will be less by the number of
// passes that have been done before

#include <stdio.h>

#define SIZE 6

void arrayElements(int array[], int size);
void bubbleSort(int array[], int size);

int main(void) {
  // int numbers[SIZE] = {6, 3, 8, 5, 2, 7, 4, 1};
  int numbers[SIZE] = {5, 2, 1, 3, 6, 4};

  printf("Before Sorting\n");
  arrayElements(numbers, SIZE);

  // Bubble Sort Algorithm
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
  for (int i = 0; i < size - 1; i++) {
    // Swap counter for monitoring if array is already sorted
    // If swap counter remains unchanged inside of this inner loop,
    // then the array is sorted
    int swap_counter = 0;
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] < array[j+1]) {
        int swap = array[j];
        array[j] = array[j+1];
        array[j+1] = swap;
        swap_counter += 1;
      }
    }
    // Print array elements after every swap pass
    printf("Swap pass: %i\n", i+1);
    arrayElements(array, size);
    if (swap_counter == 0) {
      break;
    }
  }
}
