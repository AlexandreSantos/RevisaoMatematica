#include <string.h>

/**
  * Verifica se o número passado como argumetno é divisível por 2, 
  * se ele é um número par ele é divisível por 2, para verificar se o número é par
  * é necessário dividí-lo por 2, se o resto for 0, o número é par e divisível por 2
  * @return bool
  */
div2(int num){
         if(num % 2 == 0){
                return 1;
         }else{
               return 0;
         }         
}
         
/**
  * Verifica se o número é divisível por 3
  * neste caso é somado os valores absolutos do número passado como argumento
  * e se essa soma tiver um número divisível por 3, ele é divisível por 3
  * Exemplo: 243 -> 2 + 4 + 3 = 9 
  * 9 é divisível por 9? Sim...
  * @return bool
  */
div3(char num[]){
        char conta[20];
        int lengthNum, i; 
        
        /*
        for(i = 0; i < strlen(num); i++){
                conta = conta + atoi(num[i]);
        }
        */
        
        return i;
}
