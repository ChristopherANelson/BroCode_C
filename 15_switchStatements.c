#include <stdio.h>

int main(){
  /*
   * Switch Statement is a more efficient way to using many "else if" statements
   * It allows a value to be tested for equality against many cases.
  */

  char grade;

  printf("\nEnter your grade: ");
  scanf("%c", &grade);
/*
  if(grade == 'A'){
  printf("Perfect!\n");
  }
  else if(grade == 'B'){
    printf("You did good\n");
  }
  else if(grade == 'C'){
    printf("You could do better\n");
  }
  else if(grade == 'D'){
    printf("Well... it's not an F...\n");
  }
  else if(grade == 'F'){
    printf("DAMN!\n");
  }
  else{
    printf("Invalid grade.");
  }
*/

  switch(grade){

    case 'A':
      printf("Perfect!\n");
      break;

    case 'B':
      printf("You did good\n");
      break;

    case 'C':
      printf("You could do better\n");
      break;

    case 'D':
      printf("Well... it's not an F...\n");
      break;

    case 'F':
      printf("DAMN!\n");
      break;
  }
  
  return 0;
}
