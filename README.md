# CS50 Harvard Practice Exercises
## About this repo
Practice Exercises for Computer Science Course by edX in collaboration with
Harvard University

### How to compile these C source files
- **NOTE**: *You should have gcc installed in your computer to perform the
next step*
  - To quickly find out if you have gcc already installed. Type this on the
  terminal
  ```
  gcc --version
  ```
  - If not installed, head over to here [GCC](https://gcc.gnu.org/)
- Clone this repo as shown below or just fork it
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
