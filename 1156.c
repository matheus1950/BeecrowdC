#include <stdio.h>

int main() {

	int n=1;
	float soma=0, d= 1;

	while(39>=n){
		soma+= n/d;
		n+=2;
		d*=2;
	}

	printf("%.2f\n", soma);
    return 0;
}
