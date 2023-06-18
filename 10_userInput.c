#include <stdio.h>
#include <string.h>

int main(){

  char name[25];                          // 25 bytes MAX
  int age;

  /*
  printf("What is your name?");
  scanf("%s", &name);

  printf("How old are you?");
  scanf("%d", &age);                      // % is address of operator

  printf("Hello %s\n", name);
  printf("You are %d years old", age);

  */

  // scanf doesn't work well if input has white space (i.e. first and last name)
  // instead use fgets()
  
  
  printf("What is your name?");
  fgets(name, 25, stdin);
  //fgets automatically adds a \n to end.
  //To remove, use following code
  name[strlen(name)-1] = '\0';

  printf("How old are you?");
  scanf("%d", &age);                      // % is address of operator

  printf("Hello %s\n", name);
  printf("You are %d years old", age);





  return 0;
}
