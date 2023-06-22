#include <stdio.h>
int main()
{

	int max= 20;
	int v[max];
	int i=0, aux;

	while(i<max){
		scanf("%i", &v[i]);
		i++;
	}

	i=0;

	while(i!=max){
		max--;
		aux= v[i];
		v[i]= v[max];
		v[max]= aux;

		i++;
	}

	i=0;

	while(i<20){
		printf("N[%i] = %i\n", i, v[i]);
		i++;
	}


    return 0;
}
