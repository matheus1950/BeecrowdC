#include <stdio.h>

int main() {

	int X, i= 6;
	scanf("%i", &X);

	while(i!=0){
		if(X%2!=0){
			i--;
			printf("%i\n", X);
		}
		X++;
	}

    return 0;
}
