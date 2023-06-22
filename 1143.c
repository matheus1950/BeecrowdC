#include <stdio.h>

int main() {

	int N, i=1;

	scanf("%i", &N);

	while(N>=i){
		printf("%i %i %i\n", i, i*i, i*i*i);
		i++;
	}

    return 0;
}
