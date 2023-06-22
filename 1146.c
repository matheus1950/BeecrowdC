#include <stdio.h>

int main() {

int X=1, i=1;

	while(X!=0){
		scanf("%i", &X);
		while(X>i && X!=0){
			printf("%i ", i);
			i++;
		}
		if(X==i && X!=0){
			printf("%i\n", i);
		}
		i=1;
	}


    return 0;
}
