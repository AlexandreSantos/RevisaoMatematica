#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "divisibilidade.h"

int main(int argc, char *argv[])
{
  int num;
  int result;
  char str[];

  // pega n�mero
  printf("Digite um numero: ");
  scanf("%d", &num);
  
  result = div2(num);
  
  if(result != 0){
            printf("your number is divisible by 2, it should even.");
  }else{
        printf("your number is not divisible by 2, it should odd.");
  }
  
  printf("\n\n ----------------------------------------------- \n\n");
  
  printf("Digte uma string: ");
  //scanf("%s", &str);
  gets(str);
  printf("\n the length your string is: %d", div3(str)); 

  printf("\n\n");
  system("PAUSE");
  return 0;
}
