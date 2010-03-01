#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "divisibilidade.h"

int main(int argc, char *argv[])
{
  int num;
  int result;
  char str[];

  // testa se ele é divisível por 2
  printf("Enter a number: ");
  scanf("%d", &num);
  
  result = div2(num);
  
  if(result != 0){
            printf("your number is divisible by 2, it should even.");
  }else{
        printf("your number is not divisible by 2, it should odd.");
  }
  
  printf("\n\n ----------------------------------------------- \n\n");
  
  // testa se ele é divisível por 3
  printf("Enter a string: ");
  gets(str);
  printf("\n the length your string is: %d", div3(str)); 

  printf("\n\n");
  system("PAUSE");
  return 0;
}
