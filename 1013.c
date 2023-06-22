#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, maior;

	scanf("%i %i %i", &a, &b, &c);

	maior= (a+b+abs(a-b))/2;

	if(c>maior){
	printf("%i eh o maior\n", c);
	}
	else{
	printf("%i eh o maior\n", maior);
	}
    return 0;
}
