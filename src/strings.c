/* Strings in C and string functions
 * String are declared as char but with size like in Arrays
 * They are 1-Dimensional Arrays
 * They are terminated by a null character, which the compiler automatically
 * adds at the end.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  // String initialization.
  char msg[50] = "Bye";
  printf("Message: %s\n", msg); // Bye

  // String declaration and assignment CANNOT be done separately
  // String copying is done instead by using strcpy() function
  char reply[50];
  strcpy(reply, "Welcome");
  printf("Reply: %s\n", reply); // Welcome

  // String length
  // 1. Without using in-built function in string.h
  int len = 0;
  for (int i = 0; msg[i] != '\0'; i++) {
    len += 1;
  }
  printf("Message length: %i\n", len);

  // 2. Using in-built function strlen()
  len = strlen(reply);
  printf("Reply length: %i\n", len);

  // String Compare strcmp(s1, s2), compares two strings
  // Returns 0 if the two strings are the same, negative if s1<s2 and vice versa
  printf("%i\n", strcmp(msg, reply)); // -21

  // String Concatenation strcat(s1, s2),
  // Concatenates string s2 to the end of string s1
  printf("%s\n", strcat(msg, reply)); // ByeWelcome
}
