#include <stdio.h>

int main() {

	int n=1, a=0, g=0, d=0;

	while(n!=4){
		scanf("%i", &n);
		switch(n){
			case 1: a++; break;
			case 2: g++; break;
			case 3: d++; break;
		}
	}
	printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", a, g, d);

    return 0;
}
