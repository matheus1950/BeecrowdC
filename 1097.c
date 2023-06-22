#include <stdio.h>

int main() {

	int i=1, j=7, n=1;


	while(i<=9){
		while(n<=3){
			printf("I=%i J=%i\n", i, j);
			n++;
			j--;
		}
		n=1; i=i+2; j=j+5;
	}
    return 0;
}
