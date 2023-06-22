#include <stdio.h>

int main() {

	long long fatorial1, fatorial2, soma;
	int M, N;

	while(scanf("%i %i", &M, &N)!=EOF && M>=0 && N>=0 && M<=20 && N<=20){
		fatorial1= M;
		fatorial2= N;

		if(M==0){
			fatorial1= 1;
		}
		if(N==0){
			fatorial2= 1;
		}

		while(M>1){
			fatorial1*= (M-1);
			M--;
		}

		while(N>1){
			fatorial2*= (N-1);
			N--;
		}

		soma= fatorial1+ fatorial2;
		printf("%lli\n", soma);

	}


    return 0;
}
