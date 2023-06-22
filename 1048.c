#include <stdio.h>

int main()
{
float salario, reajuste;
int percentual;

scanf("%f", &salario);

if(salario >=0 && salario <= 400){
	reajuste = salario * 0.15;
	salario = reajuste + salario;
	percentual = 15;
}
else if(salario >400  && salario <= 800){
	reajuste = salario * 0.12;
	salario = reajuste + salario;
	percentual = 12;
}
else if(salario > 800 && salario <= 1200){
	reajuste = salario * 0.10;
	salario = reajuste + salario;
	percentual = 10;
}
else if(salario > 1200 && salario <= 2000){
	reajuste = salario * 0.07;
	salario = reajuste + salario;
	percentual= 7;
}
else if(salario > 2000){
	reajuste = salario * 0.04;
	salario = reajuste + salario;
	percentual = 4;
}

printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %i %\n", salario, reajuste, percentual);
    return 0;
}
