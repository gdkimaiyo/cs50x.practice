# CS50x Practice Exercises

## Author
[Gideon Kimaiyo](https://github.com/gdkimaiyo)

## Note
Some programs in the directories above use the CS50x library **cs50.h**

## How to compile C source files
**NOTE**: *You should have [gcc](https://gcc.gnu.org/) installed in your
computer to perform the next steps*
- Clone this repo
- change directory to `cs50x.harvard.practice.exercises`
- change directory to `src/wk1` or any week containing c source file
- compile on the terminal by typing:
```
gcc filename.c cs50.c -o filename
```
where **filename** is the name of the C source file
- The above command does the following:
  - Compiles the main source file **filename.c**
  - Links the cs50 source file **cs50.c**
  - Specify the output file by using the option -o filename. Without adding -o
  option, a.out file is generated.
- Run the generated executable by typing the command:
```
./filename
```
- Done.

## Week 0
Introduction to Programming using
[Scratch](https://scratch.mit.edu/projects/editor/), a visual programming
language which can be used to create games, interactive stories and animations

To view the scratch projects in `src/wk0` directory, you need to install [Scratch 3](https://scratch.mit.edu/download) or use the
[Online editor](https://scratch.mit.edu/projects/editor/)

## Week 1
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

## Week 2
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

## Week 3
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

### Recursion
Recursion is the ability of a function to call / invoke itself. Recursive
functions can sometimes replace loops in non-recursive functions.
**Base case(s)** is used to determine when to terminate the recursive process
- Some of the examples that use recursion are:
  - 19.factorial.c
  - 19.recursive_bubble_sort.c
  - 19.fibonacci.c

### Binary Search Algorithm
Binary search, also known as logarithmic search, works such that it divides a
**sorted** array into half, hence reducing the search area to find a
target value.
- Steps
1. Find the middle element of array:: as shown below
```
middle = startValue + (endValue - startValue) / 2
```
2. If middle element = targetValue, `return "FOUND"`,
3. If middle > targetValue narrow the search to the lower / left half.
effectively, the endValue will be:
```
endValue = middle - 1
```
4. If middle < targetValue narrow the search to the upper / right half.
effectively, the startValue will be:
```
startValue = middle + 1
```
5. If targetValue is not found at all, `return "NOT FOUND"`, that is, the moment
startValue becomes bigger than the endValue

Binary search can be achieved by **iterative** or **recursive** methods.

### Merge Sort Algorithm
Divide and conquer technique. Merge Sort Algorithm makes use if recursion.
Merge Sort comes with the cost of creating temporary arrays for holding divided
sub-arrays.
- Steps
  1. Sort the left half of the array
  2. Sort the right half of the array
  3. Merge the two halves together

## Week 4
### Pointers
A **pointer** is a variable whose value is an address of a another variable.
It turns out that every variable is a memory location and every memory location
has its address in memory defined which can be accessed using ampersand (&) sign

`int n = 12; // variable n declaration and initialization`  
`int *p = &n // pointer variable storing the address of n`

**Note** that the data type of the pointer should be of the same type as the
actual variable that the pointer is pointing to. Also the asterisk signifies
that the variable is a pointer.

### Call by value and Call by reference
- call by value, values of the variables are passed to a function while call by
reference, addresses (memory locations) of the variables are passed to the function.
- call by value, actual variables remain unchanged, that is, changes do not
reflect outside of the function (callee) whereas in call by reference changes
reflect both outside and inside of the function (callee).
- call by value does not alter the values of the actual variables while call by
reference does.
- call by value, memory address of actual parameter and formal parameter are
different whereas call by reference memory address of actual and formal parameters
are the same.

## Week 5
### Data Structures
**Data structures** in C is a way of storing data in an organised and efficient way.
The data should be of the same data type. The data is stored as per memory availability.

Some examples of data structures are:
- Array
- Linked List
- Stack
- Queue
- Hashing
- Trees

### Linked Lists
