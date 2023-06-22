#include <stdio.h>
#define max 3

int main()
{
	int v[max];
	int guarda[max];
	int aux, i= 0;

	while(i<3){
		scanf("%i", &v[i]);
		guarda[i]= v[i];
		i++;
	}

	while(v[0]>v[1] || v[0]>v[2] || v[1]>v[2]){

		if(v[0]>v[1]){
			aux = v[1];
			v[1] = v[0];
			v[0] = aux;
		}

		if(v[1]>v[2]){
			aux= v[2];
			v[2]= v[1];
			v[1]= aux;
		}
	}

	i=0;

	while(i<3){
		printf("%i\n", v[i]);
		i++;
	}

	printf("\n");

	i=0;

	while(i<3){
		printf("%i\n", guarda[i]);
		i++;
	}


    return 0;
}
