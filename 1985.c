#include <stdio.h>

int main()
{
	int n, p, quant;
	float soma=0;

	scanf("%i", &n);

	while(n>0){
		scanf("%i", &p);
		scanf("%i", &quant);

		switch(p){
			case 1001: soma+= quant * 1.50; break;
			case 1002: soma+= quant * 2.50; break;
			case 1003: soma+= quant * 3.50; break;
			case 1004: soma+= quant * 4.50; break;
			case 1005: soma+= quant * 5.50;
		}

		n--;
	}

	printf("%.2f\n", soma);
	return 0;
}
