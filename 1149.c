#include <stdio.h>

int main() {

	int a, n, i=0, valor=0;

	scanf("%i %i", &a, &n);

	while(n<=0){
		scanf("%i", &n);
	}

	while(n>i){
		valor+= a+i;

		i++;
	}

	printf("%i\n", valor);
    return 0;
}
