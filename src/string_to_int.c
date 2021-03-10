// Convert a string to an integer using atoi() function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  int res;
  char str[50];
  // variable to convert resulting int back to string
  char str_res[50];

  printf("String: ");
  scanf("%s", str);

  res = atoi(str);

  // compare the length of str_res with original string
  sprintf(str_res, "%i", res);
  if (strlen(str_res) != strlen(str)) {
    printf("'%s' CANNOT be converted to Integer\n", str);
    return 1;
  }

  printf("Integer Value: %i\n", res);

  return 0;
}
