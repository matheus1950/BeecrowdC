#include <stdio.h>
#define max 100
int main()
{

	double X, v[max];
	int i=0;

	scanf("%lf", &X);


	while(max>i){
		v[i]= X;
		printf("N[%i] = %.4f\n", i, v[i]);

		X= X/2;
		i++;
	}
    return 0;
}
