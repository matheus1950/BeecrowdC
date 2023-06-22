#include <stdio.h>
#include <math.h>

int main() {

long N=2, x, primo, j, quadrada;

scanf("%li", &N);

while(N>=1){
	primo=0, j=2;

	scanf("%li", &x);

	quadrada= sqrt(x);

	while(quadrada>=j){
		if(x%j==0){
			primo++;
		}
		j++;
	}
	if(primo==0){
		printf("Prime\n");
	}
	else{
		printf("Not Prime\n");
	}
	N--;
}

    return 0;
}
