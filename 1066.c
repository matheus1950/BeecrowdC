#include <stdio.h>

int main() {

	int n=1, numero, par=0, impar=0, positivo= 0, negativo=0;

	while(n<=5){
		scanf("%i", &numero);
		n++;

		if(numero%2 == 0){
		par++;
		}
		else{
		impar++;
		}

		if(numero > 0){
		positivo++;
		}

		if(numero < 0){
		negativo++;
		}
	}

	printf("%i valor(es) par(es)\n", par);
	printf("%i valor(es) impar(es)\n", impar);
	printf("%i valor(es) positivo(s)\n", positivo);
	printf("%i valor(es) negativo(s)\n", negativo);

    return 0;
}
