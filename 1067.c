#include <stdio.h>

int main() {

	int X, i=1;

	scanf("%i", &X);

	while(X>=i){
		if(i%2!=0){
			printf("%i\n", i);
		}
		i++;
	}

    return 0;
}
