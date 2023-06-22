#include <stdio.h>

int main() {

	int N, i=1, x, y, impar;

	scanf("%i", &N);

	while(N>=i){
		scanf("%i %i", &x, &y);
		impar=0;

		if(x>y){
			y++;
			while(x>y){
				if(y%2!=0){
				impar+=y;
				}
				y++;
			}
		}

		else if(y>x){
			x++;
			while(y>x){
				if(x%2!=0){
					impar+=x;
				}
				x++;
			}
		}

		printf("%i\n", impar);
		i++;
	}

	return 0;
}
