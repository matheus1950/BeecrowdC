#include <stdio.h>

int main() {

	int x,y, soma=0;
	scanf("%i %i", &x, &y);


	if(x>=y){
		while(x>=y){
			if(y%13!=0){
				soma+=y;
			}
			y++;
		}
	}

	else{
		while(y>=x){
			if(x%13!=0){
				soma+=x;
			}
			x++;
		}
	}

	printf("%i\n", soma);
    return 0;
}
