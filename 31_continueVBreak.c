#include <stdio.h>

int main(){
  // continue = skips rest of code & forces the next iteration of loop
  // break = exits a loop/switch
  //

  for (int i = 1; i <= 20; i++)
    {
      if (i == 13)
      {
        continue;
      }
      printf("%d\n", i);
    }

  printf("\n");
  for (int j = 1; j <= 20; j++){
    if (j == 13){
      break;
    }
      printf("%d\n", j);
  }
  return 0;
}
