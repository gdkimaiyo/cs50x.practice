/**** Stack overflow ***/
// Stack overflow happens when a program consumes more memory space
// It happens when a function is called (recursively) so many times (infinite)
// such that the stack runs out of computer memory
// It can also happen when too many local variables are declared or a large
// dimensional array is declared

/**** Buffer overflow ***/
// Buffers are created to contain a finite amount of data
// Therefore, a Buffer overflow occurs when a program tries to store more data
// in a buffer e.g an array of a given size or a malloc()

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void drawPyramid(int h);

int main(void) {
  /* Buffer overflow */
  // Results to buffer overflow, since array contains more elements than size 5
  // int numbers[5] = {1,2,3,4,5,6,7};
  // printf("%i\n", numbers[3]);

  // Buffer overflow occurs if user types a string of size more than the malloc()
  // char *my_str = malloc(4);
  //
  // printf("My string: ");
  // scanf("%s", my_str);
  //
  // printf("%s\n", my_str);
  //
  // free(my_str);
  /*End of buffer overflow */

  /* Stack overflow */
  // Mario
  int height;

  printf("Height: ");
  scanf("%i", &height);

  drawPyramid(height);

  /*End of Stack overflow */
}

void drawPyramid(int h) {
  // PROBLEM > Commented out section triggers stack overflow
  // recursively calling the function infinitely
  // drawPyramid(h - 1);
  //
  // for (int i = 0; i < h; i++) {
  //   printf("#");
  // }
  // printf("\n");

  // SOLUTION
  // Have a base case
  if (h == 0) {
    return; // this stops the infinite recursion
  }

  drawPyramid(h - 1);

  for (int i = 0; i < h; i++) {
    printf("#");
  }
  printf("\n");
}
