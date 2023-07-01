#include <stdio.h>
#include <string.h>

int main()
{
  // While loop = repeats a section of code possibly unlimited times.
  // WHILE some condition remains true
  // a while loop might not execute at all
  
  char name[25];
  printf("What is your name?: \n");
  fgets(name, 25, stdin); //standard input
  name[strlen(name) - 1] = '\0';


  while(strlen(name) == 0){
    printf("You did not enter your name\n");
    printf("What is your name?: \n");
    fgets(name, 25, stdin); //standard input
    name[strlen(name) - 1] = '\0';

  }

  printf("Hello %s", name);

  return 0; 
}
