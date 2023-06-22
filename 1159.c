#include <stdio.h>

int main() {

	int x, n, soma;

	scanf("%i", &x);

	do{
		n=0;
		soma=0;

		while(n<5){
			if(x%2==0){
				soma+=x;
				n++;
			}
			x++;
		}
		printf("%i\n", soma);

		scanf("%i", &x);

	}while(x!=0);

	return 0;
}
