#include <stdio.h>

int main() {

	int N, x, i=1, j=2, primo;
	scanf("%i", &N);

	while(N>=1){
		primo=0; j=2;

		scanf("%i", &x);

		while(x>=j){
			if(x%j==0){
				primo++;
			}
			j++;
		}
		if(primo==1){
			printf("%i eh primo\n", x);
		}
		else{
			printf("%i nao eh primo\n", x);
		}
		N--;
	}
    return 0;
}
