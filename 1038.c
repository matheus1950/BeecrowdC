#include <stdio.h>

int main()
{
int n, cod;
float total;

scanf("%i %i", &cod, &n);

switch(cod){
	case 1: total= n*4; break;
	case 2: total= n*4.50; break;
	case 3: total= n*5; break;
	case 4: total= n*2; break;
	case 5: total= n*1.50; break;
}

printf("Total: R$ %.2f\n", total);
}
