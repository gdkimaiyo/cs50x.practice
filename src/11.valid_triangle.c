//  Program that uses a function to determine if a Triangle is valid or not
// For a triangle to be valid
// 1. All sides should be of positive length
// 2. Sum of lengths of any two sides, must be greater than the length of the third side

#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

bool validTriangle(float a, float b, float c);

int main(void) {
  float b = get_float("Base: ");
  float h = get_float("Height: ");
  float d = get_float("Diagonal: ");

  // use ternary operator
  string valid = (validTriangle(b, h, d)) ? "Valid" : "Invalid";

  printf("%s Triangle\n", valid);
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
