#include <stdio.h>

int main() {

	int gre, inte, i=0, g=0, e=0, j=0, n;

	while(n!=2){
		j++;
		scanf("%i %i", &inte, &gre);

		if(inte>gre){
			i++;
		}
		if(gre>inte){
			g++;
		}
		if(gre==inte){
			e++;
		}

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%i", &n);
	}

	printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\n", j, i, g, e);

	if(g>i){
		printf("Gremio venceu mais\n");
	}
	if(g<i){
		printf("Inter venceu mais\n");
	}
	if(g==i){
		printf("Nao houve vencedor\n");
	}

    return 0;
}
