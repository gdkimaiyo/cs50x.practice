# CS50 Harvard Practice Exercises
## About this repo
Practice Exercises for Computer Science Course by edX in collaboration with
Harvard University for the year 2021

### How to compile these C source files
- **NOTE**: *You should have gcc installed in your computer to perform the
next step*
  - To quickly find out if you have gcc already installed. Type this on the
  terminal
  ```
  gcc --version
  ```
  - If not installed, head over to here [GCC](https://gcc.gnu.org/)
- Clone this repo as shown below or fork it
```
git clone https://github.com/gdkimaiyo/cs50x.harvard.practice.exercises.git
```
- change directory to cs50x.harvard.practice.exercises
- change directory to one containing any of practice exercises like the
**stars** directory
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
starting with 1 star. **Main learning lesson**: Understanding nesting in loops
in C

### type_casting
The **aim** of this program is to understand **type casting**. Type casting
refers to changing the variable of one data type to another. Like in the
case of dividing two numbers of type int. The result for division will be
of type float. **Although** your program will run without errors,
the output will be inaccurate. This is called a **logical error**.

**Counter Option**: Why not just change the data type of the two numbers to
of type float. **Yes**, that could work, **however**, that is a heavy handed
solution. It is like using a forklift to lift a small piece of stone.
