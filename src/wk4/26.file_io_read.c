// Writing and Reading files in C
// Read

#include <stdio.h>

int main(void) {
  FILE *file;
  char fname[50];
  char str;

  // Prompt for file to open
  printf("Which file to open?: ");
  scanf("%s", fname);

  // Open file in read mode. Read mode to make it possible to use fgetc()
  file = fopen(fname, "r");

  if (file == NULL) {
    printf("Error while opening file or file does not exist...\n");
    return 1;
  }

  printf("%s content\n\n", fname);
  str = fgetc(file);
  while (str != EOF) {
    printf("%c", str);
    str = fgetc(file);
  }
  printf("\n");
  // Close file if it's open
  fclose(file);
}
