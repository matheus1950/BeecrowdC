#include <stdio.h>

int main() {

	int a, b, c, d, e;
	int i=0;

	scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);

	if(a%2==0){i++;}
	if(b%2==0){i++;}
	if(c%2==0){i++;}
	if(d%2==0){i++;}
	if(e%2==0){i++;}

	printf("%i valores pares\n", i);
	return 0;
}
