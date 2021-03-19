/* C program to demonstrates use of booleans in C
 * This program continues to ask for a number which should be non-zero else
 * the program stops
 */
#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n;
  bool non_zero = true;

  do {
    n = get_int("Type a number [0 to stop]: ");
    if(n == 0) {
      non_zero = false;
    }
  } while(non_zero);
}
