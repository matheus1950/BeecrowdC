#include <stdio.h>

int main() {

	int N, horas, minutos, segundos;

	scanf("%i", &N);

	minutos= N/60;
	segundos= N%60;
	horas= minutos/60;
	minutos= minutos%60;

	printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}

