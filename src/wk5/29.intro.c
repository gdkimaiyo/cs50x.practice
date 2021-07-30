// Use of malloc and realloc to dynamically increase the size of an array

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *list = malloc(3 * sizeof(int));

  if (list == NULL) {
    return 1;
  }

  list[0] = 1;
  list[1] = 2;
  list[2] = 3;

  // copies the elements in original array and allocates new chunk of memory
  int *temp = realloc(list, 4 * sizeof(int));
  if (temp == NULL) {
    free(list);
    return 1;
  }

  temp[3] = 4;

  free(list);

  list = temp;

  for (int i = 0; i < 4; i++) {
    printf("%i\n", list[i]);
  }
  
  free(list);
}