//  Program that uses a function to determine is a Triangle valid or not
// For a triangle to be valid
// 1. All sides should be of positive length
// 2. Sum of lengths of any two sides, must be greater than the length of the
// third side

#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>


bool validTriangle(float a, float b, float c);

int main(void) {
  float b, h, d;

  // printf("Input the triangle sides length: ");
  // scanf("%f %f %f", &b, &h, &d);

  b = get_float("Base: ");
  h = get_float("Height: ");
  d = get_float("Diagonal: ");

  if (validTriangle(b, h, d)) {
    printf("Valid Triangle\n");
  } else {
    printf("Invalid Triangle\n");
  }
}

bool validTriangle(float a, float b, float c) {
  // All sides shoulb be positive
  if (a <= 0 || b <= 0 || c <= 0) {
    return false;
  }

  // Sum of any two sides must be greater than the third side
  if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
    return false;
  }

  return true;
}
