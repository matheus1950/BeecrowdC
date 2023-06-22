#include <stdio.h>
#include <math.h>

int main() {

	int A = 1, B = 1, porcentagem;
	float porcentagem2, ladoReal;


	do{
		scanf("%i %i %i", &A, &B, &porcentagem);

		if(A == 0 || B == 0)
			break;

		porcentagem2 = porcentagem/100.0;

		ladoReal = sqrt((A * B)/ porcentagem2);

		printf("%i\n", (int)ladoReal);

	}while(A != 0 && B != 0);

    return 0;
}
