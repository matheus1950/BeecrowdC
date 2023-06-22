#include <stdio.h>

int main() {

	int N, i=1;

	scanf("%i", &N);

	while(N>=i){
		if(N%i==0){
			printf("%i\n", i);
		}
		i++;
	}

    return 0;
}
