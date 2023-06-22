#include <stdio.h>

int main() {

	int N, X, i=1, in=0, out=0;

	scanf("%i", &N);

	while(N >= i){
		scanf("%i", &X);

		if(X>=10 && X<=20){in++;}
		else{out++;}
		i++;
	}

	printf("%i in\n", in);
	printf("%i out\n", out);
	return 0;
}
