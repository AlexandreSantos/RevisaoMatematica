#include <string.h>

/**
  * Verifica se o n�mero passado como argumetno � divis�vel por 2, 
  * se ele � um n�mero par ele � divis�vel por 2, para verificar se o n�mero � par
  * � necess�rio divid�-lo por 2, se o resto for 0, o n�mero � par e divis�vel por 2
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
  * Verifica se o n�mero � divis�vel por 3
  * neste caso � somado os valores absolutos do n�mero passado como argumento
  * e se essa soma tiver um n�mero divis�vel por 3, ele � divis�vel por 3
  * Exemplo: 243 -> 2 + 4 + 3 = 9 
  * 9 � divis�vel por 9? Sim...
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
