/*
 * This program demonstrates type casting in C
 * In case of division of integers, instead of
 * changing the two int numbers to divide to float
 * you type cast as shown below
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
   // get two integers from user
   int a = get_int("a: ");

   int b = get_int("b: ");

   // divide a by b
   float result = (float) a / (float) b;
   printf("%f\n", result);
 }
