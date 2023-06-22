#include <stdio.h>

int main() {

	int n, mult=1;

	scanf("%i", &n);

	while(n>0){
		mult*= n;
		n--;
	}

	printf("%i\n", mult);
    return 0;
}
