#include <stdio.h>

int main() {

	int horas, VM;
	float distancia, litros;

	scanf("%i %i", &horas, &VM);

	distancia= horas*VM;

	litros= distancia/12;

	printf("%.3f\n", litros);

return 0;
}
