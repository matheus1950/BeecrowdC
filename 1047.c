#include <stdio.h>

int main()
{
	int h1, m1, h2, m2, sub, horas, minutos;

	scanf("%i %i %i %i", &h1, &m1, &h2, &m2);

	m1 = m1 + h1*60;
	m2 = m2 + h2*60;

	sub = m2- m1;

	if(m2 <= m1){
		sub= m2+1440 - m1;
		horas= sub/60;
		minutos= sub%60;
	}
	else{
		horas= sub/60;
		minutos= sub%60;
	}

printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas, minutos);

}
