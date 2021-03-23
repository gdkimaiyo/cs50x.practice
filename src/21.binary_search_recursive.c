// Binary search, also known as logarithmic search, works such that it divides
// a *sorted* array into half, hence reducing the search area to find a target value.
// Steps
// 1. Find the middle element of array:: middle = (startValue + endValue) / 2
// 2. If middle element = targetValue, return "FOUND",
// 3. If middle > targetValue narrow the search to the lower / left half
// effetctively, the endValue will be endValue = middle - 1
// 4. If middle < targetValue narrow the search to the upper / right half
// effetctively, the startValue will be startValue = middle + 1
// 5. If targetValue is not found at all, return "NOT FOUND"

#include <stdio.h>

#define SIZE 15

void arrayElements(int array[], int size);
void bubbleSort(int array[], int size);
int binarySearch(int array[], int size, int start, int end, int target);

int main(void) {
  int numbers[SIZE] = {11, 23, 8, 14, 30, 9, 6, 17, 22, 28, 25, 15, 7, 10, 19};

  // Sort array fisrt
  bubbleSort(numbers, SIZE);
  printf("Sorted Array: ");
  arrayElements(numbers, SIZE);

  int target_value = 17;
  int start_value = 0, end_value = SIZE - 1;

  int found_index = binarySearch(numbers, SIZE, start_value, end_value, target_value);

  if (found_index == -1) {
    printf("%i, Not FOUND!\n", target_value);
  } else {
    printf("%i, FOUND at index: %i\n", target_value, found_index);
  }
}

// Binary Search Algorithm > Recursive
int binarySearch(int array[], int size, int start, int end, int target) {
  // The moment start index becomes greater than end index, targetValue
  // wasn't found
  if (start <= end) {
    int middle = start + (end - start) / 2;

    // Is target value present at the middle
    if (array[middle] == target) {
      return middle;
    }

    // Is middle element less than target value, narrow search to right half
    if (array[middle] < target) {
      binarySearch(array, size, middle + 1, end, target);
    }

    // Is middle element greater than target value, narrow search to left half
    binarySearch(array, size, start, middle - 1, target);
  }

  // Return -1 if target value is not found at all
  return -1;
}

// display array elements
void arrayElements(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%i ", array[i]);
  }
  printf("\n");
}

// Bubble Sort Algorithm > Iterative
void bubbleSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    // Swap counter for monitoring if array is already sorted
    // If swap counter remains unchanged inside of this inner loop,
    // then the array is sorted
    int swap_counter = 0;
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j+1]) {
        int swap = array[j];
        array[j] = array[j+1];
        array[j+1] = swap;
        swap_counter += 1;
      }
    }
    if (swap_counter == 0) {
      break;
    }
  }
}
