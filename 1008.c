#include <stdio.h>

int main() {

	int funcionario, horas;
	float salario, valor;

	scanf("%i %i %f", &funcionario, &horas, &valor);

	salario= horas * valor;

	printf("NUMBER = %i\n", funcionario);
	printf("SALARY = U$ %.2f\n", salario);

return 0;
}
