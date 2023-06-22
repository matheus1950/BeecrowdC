#include <stdio.h>

int main() {

	int X,Y;

	do{

	scanf("%i %i", &X, &Y);
	if(Y>X){printf("Crescente\n");}
	if(X>Y){printf("Decrescente\n");}

	}while(X!=Y);


    return 0;
}
