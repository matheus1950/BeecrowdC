#include <stdio.h>

int main()
{
	int N, i=1, dias;
	float C;

	scanf("%i", &N);

	while(N>=i){
		dias=0;
		scanf("%f", &C);
		while(C>1){
			C-=C/2;
			dias++;
		}
		printf("%i dias\n", dias);
		i++;
	}

    return 0;
}
