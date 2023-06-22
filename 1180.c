#include <stdio.h>

int main()
{
	int N, i=0, menor, pos;
	scanf("%i", &N);

	int v[N];

	while(N>i){
		scanf("%i", &v[i]);
		i++;
	}

	i=1;

	menor= v[0];

	while(N>i){
		if(v[i]<menor){
			menor= v[i];
			pos= i;
		}
	i++;
	}

	printf("Menor valor: %i\n", menor);
	printf("Posicao: %i\n", pos);

    return 0;
}
