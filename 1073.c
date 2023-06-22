#include <stdio.h>

int main() {

	int N,i=1;

	scanf("%i", &N);

	while(N>=i){
		if(i%2 == 0){
			printf("%i^2 = %i\n", i, i*i);
		}
		i++;
	}
    return 0;
}
