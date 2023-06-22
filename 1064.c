#include <stdio.h>

int main() {

	int n=1, j= 0;
	double media, numero, variavel=0;

	while(n<=6){
		scanf("%lf", &numero);

		if(numero>0){
			j++;
			variavel+= numero ;
			media=variavel/j;
		}
		n++;
	}

	printf("%i valores positivos\n", j);
	printf("%.1lf\n", media);

    return 0;
}
