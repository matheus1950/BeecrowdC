#include <stdio.h>

int main() {

	int n, x, y, impar;

	scanf("%i", &n);

	while(n>0){
		scanf("%i %i", &x, &y);

		impar= 0;

		while(y>0){

			if(x%2!=0){
				impar+=x;
				y--;
			}
			x+=1;
		}

		printf("%i\n", impar);
		n--;
	}

    return 0;
}
