#include <stdio.h>

int main()
{

	int a= 1, n;

	scanf("%i", &n);

	while(n>0){

		printf("%i %i %i\n", a, a*a, a*a*a);

		printf("%i %i %i\n", a, (a*a)+1, (a*a*a)+1);

		a= a+1;

		n--;
	}

    return 0;
}
