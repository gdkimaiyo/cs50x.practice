// Command Line Arguments > Writing programs in C that accepts zero or more
// command-line arguments, words(strings) at the prompt after program name
// argc > Argument count
// argc > type int. Stores number of command-line arguments passed by the user
// including the name of the program
// argc should be non-negative
// argv > Argument vector
// argv > type array of chars. character pointers listing all the arguments
// argv[0] is the name of the program, after that, every element is a
// command-line argument.

// #include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // Print the first argument after the program's name
  // BUT first, if no argument is provided EXCEPT for the program name
  // Exit with 1 status
  if (argc < 2) {
    printf("Missing command-line arguments\n");
    return 1;
  }

  // Exit with 0 status > No problems encounted
  printf("First argument: %s\n", argv[1]);
  return 0;
}
