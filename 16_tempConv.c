#include <stdio.h>
#include <ctype.h>

int main(){
  char unit;
  float temp;

  printf("\nSelect Units - (F) or (C): ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if(unit == 'C'){
    printf("Enter temperature (C)");
    scanf("%f", &temp);
    temp = (temp * 9/5) + 32;
    printf("%.1f", temp);
  }
  else if(unit == 'F'){
    printf("Enter temperature (F)");
    scanf("%f", &temp);
    temp = (temp-32)/1.8;
    printf("%.1f", temp);
  }
  else{
    printf("Not a valid temperature option.");
  }

  return 0;
}
