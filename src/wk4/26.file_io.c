// Writing and Reading files in C
// Append

#include <stdio.h>

int main(void) {
  FILE *file;
  char fname[50] = "26.phonebook.csv";
  // Open file in appending mode
  file = fopen(fname, "a");

  if (file == NULL) {
    printf("Error while opening file!\n");
    return 1;
  }

  char name[50];
  char number[50];

  printf("Name: ");
  scanf("%s", name);
  printf("Number: ");
  scanf("%s", number);

  // Write file in appending mode
  // fprintf(file, "name,phone\n");
  fprintf(file, "%s,%s\n", name, number);
  // Close file
  fclose(file);

  printf("%s successfully updated\n", fname);
}
