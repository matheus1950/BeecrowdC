#include <stdio.h>

int main() {

	char nome[50];
	double salario, vendas, total;

	scanf("%s", &nome);
	scanf("%lf %lf", &salario, &vendas);

	total= 0.15*vendas + salario;

	printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
