#include <stdio.h>

int main()
{
float salario, total;

scanf("%f", &salario);

if(salario>=0 && salario<=2000){
	printf("Isento\n");
}
if(salario>2000 && salario<=3000){
	total= (salario-2000)*0.08;
	printf("R$ %.2f\n", total);
}
if(salario>3000 && salario<=4500){
	total= 1000*0.08 + (salario-3000)*0.18;
	printf("R$ %.2f\n", total);
}
if(salario>4500){
	total= 1000*0.08 + 1500*0.18 + (salario-4500)*0.28;
	printf("R$ %.2f\n", total);
}

    return 0;
}
