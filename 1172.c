#include <stdio.h>
#define max 10
int main()
{
	int v[max];
	int i= 0;

	while(i<max){
		scanf("%i", &v[i]);
		i++;
	}

	i=0;

	while(i<max){
		if(v[i]<=0){
			v[i]=1;
		}
		printf("X[%i] = %i\n", i, v[i]);
		i++;
	}

    return 0;
}
