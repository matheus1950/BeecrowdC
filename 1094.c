#include <stdio.h>

int main() {

	int N, quant, i=0, total=0, R=0, C=0, S=0;
	char tipo;
	float pc, pr, ps, c, r, s;

	scanf("%i", &N);

	while(i<N){
		scanf("%i", &quant);
		scanf(" %c", &tipo);

		total+= quant;

		if(tipo=='R'){
			R+= quant;
		}
		if(tipo=='S'){
			S+= quant;
		}
		else if(tipo=='C'){
			C+= quant;
		}

		i++;
	}

	c= C;
	r= R;
	s= S;

	pc= (c/total)*100;
	pr= (r/total)*100;
	ps= (s/total)*100;

	printf("Total: %i cobaias\n", total);
	printf("Total de coelhos: %i\n", C);
	printf("Total de ratos: %i\n", R);
	printf("Total de sapos: %i\n", S);
	printf("Percentual de coelhos: %.2f %\n", pc);
	printf("Percentual de ratos: %.2f %\n", pr);
	printf("Percentual de sapos: %.2f %\n", ps);


    return 0;
}
