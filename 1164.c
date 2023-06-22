#include <stdio.h>

int main() {

	int n, x, divisor, soma;

	scanf("%i", &n);

	while(n>0){

		divisor=1;
		soma=0;

		scanf("%i", &x);

		while(x>divisor){
			if(x%divisor==0){
				soma+=divisor;
			}
			divisor++;
		}

		if(soma==x){
			printf("%i eh perfeito\n", x);
		}
		else{
			printf("%i nao eh perfeito\n", x);
		}

		n--;
	}


    return 0;
}
