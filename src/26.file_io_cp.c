// Create a duplicate of a file in c
// Write and Read

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Ensure source file and destination file are provided
  if (argc != 3) {
    printf("source or destination file missing...\n");
    return 1;
  }
  // Open source file
  FILE *file = fopen(argv[1], "r");

  if (file == NULL) {
    printf("Error while opening file or file does not exist...\n");
    return 1;
  }
  // Open destination file to store duplicate content
  FILE *new_file = fopen(argv[2], "w");

  if (new_file == NULL) {
    fclose(file);
    printf("Error creating file...\n");
    return 1;
  }

  // Read file first, then write contents to the new file
  char str = fgetc(file);
  while (str != EOF) {
    fprintf(new_file, "%c", str);
    str = fgetc(file);
  }

  // Close files if it's open
  fclose(file);
  fclose(new_file);
  printf("%s duplicated successfully\n", argv[1]);

  return 0;
}
