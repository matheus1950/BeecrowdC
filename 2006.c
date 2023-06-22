#include <stdio.h>

int main() {

	int T, acertos=0;
	int A, B, C, D, E;

	scanf("%i", &T);
	scanf("%i %i %i %i %i", &A, &B, &C, &D, &E);

	if(A==T){acertos++;}
	if(B==T){acertos++;}
	if(C==T){acertos++;}
	if(D==T){acertos++;}
	if(E==T){acertos++;}

	printf("%i\n", acertos);
	return 0;
}
