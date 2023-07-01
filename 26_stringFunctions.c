//This isn't working for me, IDK why...
#include <stdio.h>
#include <string.h>

int main(){
  char string1[] = "Christopher";
  char string2[] = "Nelson";

  // Uncomment code for use //
  
  strlwr(string1);
  //strupr(string1);
  //strcat(string1, string2);
  //strcopy(string1, string2);
  //strncpy(string1, string2, 4);

  printf("%s", string1);

  return 0;
}
