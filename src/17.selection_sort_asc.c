// Selection Sort Algorithm

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
  for (int i = 0; i < size - 1; i++) {
    // Assign the minimum number to be the first element in each iteration
    int min = array[i];
    // Find minimum number in array of numbers from index i to SIZE and
    // swap positions by Selection Sort
    for (int j = i; j < size; j++) {
      if (array[j] < min) {
        min = array[j];
        array[j] = array[i];
        array[i] = min;
      }
    }
  }
}
