#include <stdio.h>

int main() {

	int N, i=1, a=1;

	scanf("%i", &N);

	while(N>=i){
		printf("%i %i %i PUM\n", a, a+1, a+2);
		a+=4;
		i++;
	}

    return 0;
}
