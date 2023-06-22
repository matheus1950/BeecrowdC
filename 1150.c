#include <stdio.h>

int main() {

	int x, z, n=0, soma=0;

	scanf("%i %i", &x, &z);

	while(z<=x){
		scanf("%i", &z);
	}


	while(soma<z){
		n++;
		soma+= x;
		x+=1;
	}

	printf("%i\n", n);
    return 0;
}
