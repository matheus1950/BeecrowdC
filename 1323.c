#include <stdio.h>

int main() {

	int n, i=1, quant=0;

	do{
		scanf("%i", &n);
		while(n>=i){
			quant+=i*i;
			i++;
		}
		if(n!=0){
			printf("%i\n", quant);
		}
		quant=0;
		i=1;
	}while(n!=0);

    return 0;
}
