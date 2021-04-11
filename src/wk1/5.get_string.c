/* This program uses get_string method to get strings from user.
 * Also enables use of variable type string
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  string str = get_string("Input: ");

  printf("Output: ");
  int len = strlen(str);

  // Loop through each character to print it on the screen
  for (int i = 0; i < len; i++) {
    printf("%c", str[i]);
  }
  printf("\n");
}
