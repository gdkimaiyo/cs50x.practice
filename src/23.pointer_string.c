#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  // char *str = get_string("String: ");
  char str[10];

  printf("String: ");
  scanf("%s", str);

  // Plus 1 to account for nul character \0
  char *new_str = malloc(strlen(str) + 1);

  // When memory is invalid, return 1
  if (new_str == NULL) {
    return 1;
  }
  
  for (int i = 0, len = strlen(str); i <= len; i++ ) {
    new_str[i] = str[i];
  }

  if (strlen(new_str) > 0) {
    new_str[0] = toupper(new_str[0]);
  }

  printf("String: %s\n", str);
  printf("New string: %s\n", new_str);

  // Give back memory to OS
  free(new_str);
}
