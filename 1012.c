#include <stdio.h>

int main(){
	float A, B, C;
	float Ac, Ar, At, Aq, Atri;

	scanf("%f %f %f", &A, &B, &C);

	Atri= (A*C)/2;

	Ac= C * C * 3.14159;

	At= ((A+B)*C)/2;

	Aq= B*B;

	Ar= A*B;

	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", Atri, Ac, At, Aq, Ar);

return 0;

}
