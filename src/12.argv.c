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
    printf("Missing command-line arguments EXCEPT for program name\n");
    return 1;
  }

  // Exit with 0 status > No problems encounted
  for (int i = 1; i < argc; i++) {
    // Print the arguments passed after the program name
    printf("argv[%i]: %s\n", i, argv[i]);
  }
  return 0;
}
