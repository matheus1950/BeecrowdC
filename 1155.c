#include <stdio.h>

int main() {

	int n=1;
	float soma=0;

	while(100>=n){
		soma+= 1.0/n;
		n++;
	}

	printf("%.2f\n", soma);
    return 0;
}
