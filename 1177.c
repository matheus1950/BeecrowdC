#include <stdio.h>
#define max 1000
int main()
{
	int v[max], T, aux, j, cont=0;

	scanf("%i", &T);

	aux= T;

	while(max>cont){
		T= aux;
		j= 0;

		while(T>0 && cont<1000){
			v[cont]= j;
			printf("N[%i] = %i\n", cont, v[j]);
			T--;
			j++;
			cont++;
		}
	}
    return 0;
}
