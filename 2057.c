#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

   char string[20];
   int vetor[3], resultado;

   fgets(string, 20, stdin);

   char *tok = strtok(string, " ");

   for(int i = 0; i < 3; i++){
       vetor[i] = atoi(tok);
       tok = strtok(NULL, " ");
   }

   resultado = vetor[0] + vetor[1] + vetor[2];

   if(resultado > 24)
	   resultado -= 24;
   else if(resultado < 0)
	   resultado += 24;

    printf("%i\n", resultado);


    return 0;
}
