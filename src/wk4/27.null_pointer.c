// Checking whether a pointer is null
// NULL pointer points to nothing
// It is good practice to assing NULL to a pointer that doesn't point to any
// address yet

#include <stdio.h>

int main(void) {
  int n;
  int *ptr = &n;

  if (ptr == NULL) {
    printf("Pointer is NULL %p\n", ptr);
  } else {
    printf("Pointer points to address %p\n", ptr);
  }
}
