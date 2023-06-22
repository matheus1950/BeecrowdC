#include <stdio.h>

int main() {

	int N, i=0, j=1;

	scanf("%i", &N);

	while(N>1){

		if(N>1){
			printf("%i ", i);
			i= i+j;
			N--;
		}
		if(N>1){
			printf("%i ", j);
			j= j+i;
			N--;
		}
	}

	if(N==1){
		if(i>j){
			printf("%i\n", j);
		}
		else{
			printf("%i\n", i);
		}
	}
    return 0;
}
