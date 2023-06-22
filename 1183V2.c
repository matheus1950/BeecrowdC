#include <stdio.h>
#define max 12
int main() {

	char O;
	float M[max][max], soma=0;
	int i=0, j=0, aux;


	scanf(" %c", &O);

	while(i<max){
		while(j<max){
			scanf("%f", &M[i][j]);

			j++;
		}
		j=0;
		i++;
	}

	i=0;
	j=1;

	while(i<max-1){
		aux= j;

		while(j<max)
		{
			soma+= M[i][j];
			j++;
		}

		j= aux+1;
		i++;
	}


	if(O=='S'){
		printf("%.1f\n", soma);
	}
	else if(O=='M'){
		printf("%.1f\n", soma/(((max*max)-max)/2));
	}

	return 0;
}
