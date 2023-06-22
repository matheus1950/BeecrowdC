#include <stdio.h>

int main() {

	int M=1, N=1, soma;


	while(M>0 && N>0){
		scanf("%i %i", &M, &N);
		soma=0;

		if(M>0 && N>0){

			if(M>N){
				while(M>=N){
					soma+=N;
					printf("%i ", N);
					N++;
				}
			}

			else if(N>M){
				while(N>=M){
					soma+=M;
					printf("%i ", M);
					M++;
				}
			}
			printf("Sum=%i\n", soma);
		}
	}

    return 0;
}
