// Creating and Writing files in C
// Read, Write, Append

#include <stdio.h>

int main(void) {
  FILE *file = fopen("26.phonebook.csv", "a");

  if (file == NULL) {
    return 1;
  }

  char name[50];
  char number[50];

  printf("Name: ");
  scanf("%s", name);
  printf("Number: ");
  scanf("%s", number);
  
  // Write file
  fprintf(file, "name,phone\n");
  fprintf(file, "%s,%s\n", name, number);
  // Close file
  fclose(file);
}
