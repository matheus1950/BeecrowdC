#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, positivo;

	scanf("%i %i %i %i %i %i", &a, &b, &c, &d, &e, &f);

	positivo= 0;

	if(a>0){positivo+= 1;}
	if(b>0){positivo+= 1;}
	if(c>0){positivo+= 1;}
	if(d>0){positivo+= 1;}
	if(e>0){positivo+= 1;}
	if(f>0){positivo+= 1;}

	printf("%i valores positivos\n", positivo);
}
