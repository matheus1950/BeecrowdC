#include <stdio.h>

int main() {
	int T, R1, R2, i=1, soma;
	scanf("%i", &T);

	while(T>=i){
		scanf("%i %i", &R1, &R2);
		soma= R1+R2;
		printf("%i\n", soma);
		i++;
	}

    return 0;
}
