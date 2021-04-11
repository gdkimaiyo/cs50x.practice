// assignment of variable through a pointer

#include <stdio.h>

int main(void) {
  int n;
  int *ptr = &n;
  *ptr = 7;

  if (ptr == NULL) {
    printf("Pointer is NULL %p\n", ptr);
  } else {
    printf("value of n = %i\n", n);
  }
}
