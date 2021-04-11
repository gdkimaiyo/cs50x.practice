// Create a duplicate of a file in c
// Using fread and buffer

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
  // Ensure source file and destination file are provided
  if (argc != 3) {
    fprintf(stderr, "source or destination file missing.\nUsage: ./main source_file duplicate_file\n");
    return 1;
  }
  // Open source file in read mode
  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    printf("Error while opening file or file does not exist...\n");
    return 1;
  }

  // Open destination file in write mode to store duplicate content
  FILE *new_file = fopen(argv[2], "w");
  if (new_file == NULL) {
    fclose(file);
    printf("Error creating file...\n");
    return 1;
  }

  // Read file first, then write contents to the new file one BYTE at a time
  BYTE buffer;
  while (fread(&buffer, sizeof(BYTE), 1, file)) {
    fwrite(&buffer, sizeof(BYTE), 1, new_file);
  }

  // Close files if it's open
  fclose(file);
  fclose(new_file);
  printf("%s duplicated successfully\n", argv[1]);
  return 0;
}
