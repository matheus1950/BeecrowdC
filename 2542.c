#include <stdio.h>

int main() {

int N, M, L, CM, A, CL, i=1, j=1;

while(scanf("%i", &N) != EOF){
	scanf("%i %i", &M, &L);

	M= M+1;
	L= L+1;
	N= N+1;

	int Ma[M][N];
	int Le[L][N];

	while(i<M){
		while(j<N){
			scanf("%i", &Ma[i][j]);
			j++;
		}
		j=1;
		i++;
	}

	i=1;
	j=1;

	while(i<L){
		while(j<N)
		{
			scanf("%i", &Le[i][j]);
			j++;
		}
		j=1;
		i++;
	}

	i=1;
	j=1;

	scanf("%i %i", &CM, &CL);

	scanf("%i", &A);

	if(Ma[CM][A]>Le[CL][A]){
		printf("Marcos\n");
	}

	else if(Ma[CM][A]<Le[CL][A]){
		printf("Leonardo\n");
	}

	else{
		printf("Empate\n");
	}

}

return 0;
}
