/*
 * Print stars Pattern with increasing height and width, starting with 1
 * The stars height is determined by user input which should be a
 * positive integer
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void) {
   // get pattern height from user, which should be a positive integer
   int n;
   do {
     n = get_int("Stars pattern height: ");
   } while (n < 1);

   // print out the stars pattern
   for (int i = 0; i < n; i++) {
     for (int j = 0; j <= i; j++) {
       printf("*");
   }
   printf("\n");
 }
}
