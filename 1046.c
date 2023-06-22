#include <stdio.h>

int main()
{
	int i, f, horas;

	scanf("%i %i", &i, &f);

	if(f<=i){
		horas= (f+24) - i;
	}
	else{
		horas= f - i;
	}
	printf("O JOGO DUROU %i HORA(S)\n", horas);

    return 0;
}
