#include <stdio.h>

void birthday(char name[], int age){
  printf("\nHappy brithday dear %s!", name);
  printf("\nYou are %d years old!", age);
}


int main(){

  char name[]= "Chris";
  int age = 23;

  birthday(name, age);

  return 0;
}
