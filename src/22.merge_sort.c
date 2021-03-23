// Merge Sort Algorithm > Ascending Order
// Divide and conquer technique
// Merge Sort Algorithm makes use if recursion
// Merge Sort comes with the cost of creating temporary arrays for holding
// divied subarrays
// Steps
// 1. Sort the left half of the array
// 2. Sort the right half of the array
// 3. Merge the two halves together

#include <stdio.h>

#define SIZE 6

void arrayElements(int array[], int size);
void mergeSort(int array[], int start, int end);
void merge(int array[], int start, int mid, int end);

int main(void) {
  // int numbers[SIZE] = {6, 3, 8, 5, 2, 7, 4, 1};
  int numbers[SIZE] = {5, 2, 1, 3, 6, 4};

  printf("Before Sorting\n");
  arrayElements(numbers, SIZE);

  int start = 0, end = SIZE - 1;
  // Merge Sort Algorithm
  mergeSort(numbers, start, end);

  printf("After Sorting\n");
  arrayElements(numbers, SIZE);
}

void mergeSort(int array[], int start, int end) {
  if (start >= end) {
    return;
  }
  int mid = start + (end - start) / 2;
  mergeSort(array, start, mid);
  mergeSort(array, mid+1, end);
  merge(array, start, mid, end);
}

// For merging subarrays of array
void merge(int array[], int start, int mid, int end) {
  int n1 = mid - start + 1;
  int n2 = end - mid;

  // Create temporary subarrays
  int left[n1], right[n2];
  // First subarray is array[start, mid]
  for (int i = 0; i < n1; i++) {
    left[i] = array[start + i];
  }
  // Second subarray is array[mid+1, end]
  for (int j = 0; j < n2; j++) {
    right[j] = array[mid + 1 + j];
  }

  // Maintain current index of subarrays
  // initial index of first subarray
  int i = 0;
  // initial index of second subarray
  int j = 0;
  // initial index of merged subarray
  int k = start;

  // Merge the subarrays back to main array
  while (i < n1 && j < n2) {
    if (left[i] <= right[j]) {
      array[k] = left[i];
      i++;
    } else {
      array[k] = right[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either left[] or right[],
  // copy the remaining elements of left[] if there are any
  while (i < n1) {
    array[k] = left[i];
    i++;
    k++;
  }

  // copy the remaining elements of right[] if there are any
  while (j < n2) {
    array[k] = right[j];
    j++;
    k++;
  }
}

void arrayElements(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%i ", array[i]);
  }
  printf("\n");
}
