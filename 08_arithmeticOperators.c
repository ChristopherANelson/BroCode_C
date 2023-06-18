#include <stdio.h>

int main(){

  // + (addition)
  // - (subtraction)
  // * (multiplication)
  // / (division)
  // % (modulus)
  // ++ (increment)
  // -- (decrement)
  //

  int x = 5;
  int y = 2;

  float z = x/y;
  printf("%f\n", z);
  printf("Result gets truncated. To keep x and y as int, use (float)\n");
  
  z = x / (float) y;
  printf("%f\n", z);

  
  z = x%y;
  printf("%f\n", z);

  return 0;
}
