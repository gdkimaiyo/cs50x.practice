# CS50 Harvard Practice Exercises
## About this repo
Practice Exercises for Computer Science Course by edX in collaboration with
Harvard University for the year 2021.

**NOTE:** some programs in **src** use the CS50x library **cs50.h**

### How to compile these C source files
**NOTE**: *You should have [gcc](https://gcc.gnu.org/) installed in your
computer to perform the next steps*
- Clone this repo as shown below
  - git clone
  ```
  git clone https://github.com/gdkimaiyo/cs50x.harvard.practice.exercises.git
  ```
  - or fork it
- change directory to `cs50x.harvard.practice.exercises`
- change directory to `src`
- compile on the terminal by typing:
```
gcc stars.c cs50.c -o stars
```
- The above command does the following:
  - Compiles the main source file **stars.c**
  - Links the cs50 source file **cs50.c**
  - Specify the output file by using the option -o stars. Without adding -o
  option, a.out file is generated.
- Run the generated executable by typing the command:
```
./stars
```
- Done.

## Some of the programs are briefly explained below
### stars
This program prints / outputs stars pattern with increasing height and width
starting with 1 star.
**Main learning lesson**: Understanding nesting in loops in C

### type_casting
The **aim** of this program is to understand **type casting**. Type casting
refers to changing the variable of one data type to another. Like in the
case of dividing two numbers of type int. The result for division will be
of type float. **Although** your program will run without errors,
the output will be inaccurate. This is called a **logical error**. Type casting
fixes this error

**Counter Option**: Why not just change the data type of the two numbers to
of type float. **Yes**, that could work, **however**, that is a heavy handed
solution. It is like using a forklift to lift a small piece of stone.

### abstraction
This program prompts for a positive integer, then finds the summation of numbers from
0 to that number.

The **objective** of this program is to understand abstraction and loops.
**Abstraction** is the use of functions to enable flexibility to reuse pieces
of code.

### ternary
This program demonstrates the use of **ternary** operator ?: in place of
short conditional statements

` int number = (expression) ? value1 : value2`

For scenario above, if the expression is true value1 is assigned to the
variable number, otherwise value2 is assigned.

### receipt
The is a receipt generator for customers to a mini-shop.

This program demonstrates the use of a **switch conditional statements** where discrete cases are already known like for instance when a particular item is selected by the customer.

### strings
String are declared as char but with a size specified just like in Arrays. They are 1-Dimensional Arrays. They are terminated by a null character `'\0'`, which you do not
have to provide. The compiler automatically adds the null character at the end.

**String initialization**: `char msg[50] = "Bye";`  
String declaration and assignment CANNOT be done separately. String copying is done instead by using strcpy() function.  
`char reply[50];`  
`strcpy(reply, "Welcome");`

**String length**  
Without using in-built function in string.h  
`int len = 0;`  
`for (int i = 0; msg[i] != '\0'; i++) { len += 1; }`  
Using in-built function strlen()  
`len = strlen(reply);`

**String Compare** `strcmp(s1, s2)`  
Compares two strings. Returns 0 if the two strings are the same, negative if
s1 is less than s2 and positive if s1 greater than s2.

**String Concatenation** `strcat(s1, s2),`  
Concatenates string s2 to the end of string s1

### Command-Line Arguments => argv
Programs in C that accepts zero or more arguments. These arguments are called
**Command Line arguments** which are passed to `main()` function.

Importance points to note:
- command line arguments are passed to `main()` as so:
`main(int argc, char *argv[])`
- argc is the argument count. It stores the number of command line arguments
passed by the user, including the name of the program
- argv is array of strings holding the actual arguments passed.
- argv[0] holds the name of the program
- argv[1] upto argv[n] are command line arguments, i.e, argv[1] is the first
command line argument and argv[n] is the last argument
- Command Line arguments provides a means of controlling the program outside
instead of inside.
- Arguments passed are separated by a space, however, wrap arguments with
single or double quotes if the argument has a space within.

### Structs
C structures are user-defined data type variables which allow storage of data
items of different kinds, which it wouldn't have been possible in arrays.
Simply put, with structures, data of type strings, int, float, e.t.c can be
stored under one name.

### Structs as Arguments
Structures can be passed as function arguments. `struct_as_argument.c` program in
**src** demonstrates this.

### Selection Sort Algorithm
**Ascending Order**
- Find the smallest element from an array
- Place the smallest element at the beginning of the array
- Take whichever element at the beginning of the array and place it where the
smallest element was
- Repeat process until the array is sorted

**Descending Order**
- Repeat steps above, but instead of smallest element, take biggest element

**NOTE** Selection Sort Algorithm is applicable where a small array is to be
sorted or checking of all elements is compulsory.
