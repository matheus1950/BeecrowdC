#include <stdio.h>

int main() {

	int X, Y, impar = 0;

	scanf("%i %i", &X, &Y);

	if(X > Y){
		Y++;
		while(X>Y){
			if(Y%2!=0){
				impar+=Y;
			}
			Y++;
		}
	}

	else if(Y > X){
		X++;
		while(Y > X){
			if(X%2 != 0){
				impar+=X;
			}
			X++;
		}
	}

	printf("%i\n", impar);
    return 0;
}
