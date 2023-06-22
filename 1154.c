#include <stdio.h>

int main()
{
	int n=0;
	float media, idade, soma=0;

	scanf("%f", &idade);

	do{
		soma+=idade;
		n++;

		scanf("%f", &idade);

	}while(idade>=0);

	media= soma/n;
	printf("%.2f\n", media);

    return 0;
}
