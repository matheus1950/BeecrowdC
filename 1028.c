#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, f1, f2, f1n, f2n, max;

	scanf("%i", &n);

	while(n>0){

	scanf("%i %i", &f1, &f2);

	if(f1>=f2){
		while(f1!=f2){
			f1n= f1;
			f1= f2;
			f2= abs(f1n-f1);
		}
		printf("%i\n", f2);
	}

	else if(f2>=f1){
		while(f2!=f1){
			f2n= f2;
			f2= f1;
			f1= abs(f2n-f2);
		}
		printf("%i\n", f1);
	}
	n--;
	}

    return 0;
}
