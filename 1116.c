#include <stdio.h>

int main() {

	int N, X, Y, i=1;
	float a,b, divisao;


	scanf("%i", &N);

	while(N>=i){
		scanf("%i %i", &X, &Y);
		a=X; b=Y;
		if(Y==0){
			printf("divisao impossivel\n");
		}
		else{
			divisao= a/b;
			printf("%.1f\n", divisao);
		}
		i++;
	}
	return 0;
}
