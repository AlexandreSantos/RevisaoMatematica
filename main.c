#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "divisibilidade.h"

int main(int argc, char *argv[])
{
  int num;
  int result;
  char str[10];

  // testa se ele � divis�vel por 2
  printf("Enter a number: ");
  scanf("%d", &num);
  
  result = div2(num);
  
  if(result != 0){
            printf("your number is divisible by 2, it should even.");
  }else{
        printf("your number is not divisible by 2, it should odd.");
  }
  
  printf("\n\n ----------------------------------------------- \n\n");
  
  // testa se ele � divis�vel por 3
  printf("Enter a string: ");
  scanf("%s", str);
  
  /**
    * Eu passei para ca o algoritimo de pegar valores absolutos
    * de um n�mero inteiro e som�-los entre si para fazer uma 
    * melhor debuga��o.... OBS: a fun��o fgets() � funciona no Dev-C no win7
    */
  int lengthNum, i, casting; 
        
        for(i = 0; i < strlen(str); i++){
                casting = (int)str[i] - 48;
                printf("\n");
                printf("The number of this moment is >>>>> %d \n", casting);
                lengthNum = 0;
                lengthNum = lengthNum + casting;
        }
  
  
  printf("your string is: %d", lengthNum);

  //printf("\n the length your string is: %d", div3(str)); 

  printf("\n\n");
  system("PAUSE");
  return 0;
}
