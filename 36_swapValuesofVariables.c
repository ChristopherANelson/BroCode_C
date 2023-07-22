#include <stdio.h>
#include <string.h>

int main()
{
  char x = 'X';
  char y = 'Y';
  char temp;

  temp = x;
  x = y;
  y = temp;


  char water[15] = "water";
  char lemonade[15] = "lemonade";
  char temp_w[15];

  strcpy(temp_w, water);
  strcpy(water, lemonade);
  strcpy(lemonade, temp_w);

  printf("x = %c\n", x);
  printf("y = %c\n", y);

  printf("water = %s\n", water);
  printf("lemonade = %s\n", lemonade);


  return 0;
}
