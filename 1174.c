#include <stdio.h>
#define max 100
int main()
{
	float v[max];
	int i= 0;

	while(i<max){
		scanf("%f", &v[i]);

		if(v[i]<=10){
			printf("A[%i] = %.1f\n", i, v[i]);
		}

		i++;
	}

    return 0;
}
