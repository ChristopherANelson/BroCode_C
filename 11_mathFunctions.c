#include <stdio.h>
#include <math.h>

int main(){
  double A = sqrt(9);
  double B = pow (2,4);
  int C = round(3.14);
  int D = ceil(3.14);           // round up
  int E = floor(2.99);          // round down
  double F = fabs(-94);         // absolute value
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);


  printf("Sqaure root of 9\n");
  printf("%.1lf\n\n", A);

  printf("2 to the power of 4\n");
  printf("%.1lf\n\n", B);

  printf("Round 3.14 to nearest int\n");
  printf("%d\n\n", C);

  printf("Round up 3.14\n");
  printf("%d\n\n", D);

  printf("Round down 2.99\n");
  printf("%d\n\n", E);

  printf("Absoulte value of -94\n");
  printf("%.1lf\n\n", F);

  printf("Logarithimc value of 3\n");
  printf("%.1lf\n\n", G);

  printf("Sin of 45\n");
  printf("%.1lf\n\n", H);

  printf("Cos of 45\n");
  printf("%.1lf\n\n", I);

  printf("Tan of 45\n");
  printf("%.1lf\n\n", J);
  
  return 0;
}
