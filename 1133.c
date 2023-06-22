#include <stdio.h>

int main() {

	int x, y;

	scanf("%i %i", &x, &y);

	if(x>=y){
		while(x>y){
			y++;
			if(y%5==2 || y%5==3){
				printf("%i\n", y);
			}
		}
	}

	if(y>=x){
	while(y>x){
		x++;
		if(x%5==2 || x%5==3){
			printf("%i\n", x);}
		}
	}

    return 0;
}
