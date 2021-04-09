// Program to update filename

#include <stdio.h>
#include <stdlib.h>

int main() {
  char fname[50];
  for (int i = 0; i < 3; i++) {
    sprintf(fname, "%03i.txt", i);
    FILE *file = fopen(fname, "w");
    if (file == NULL) {
      fprintf(stderr, "Unable to create file %s\n", fname);
      return 1;
    }
    fclose(file);
  }
  return 0;
}
