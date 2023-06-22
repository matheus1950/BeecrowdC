#include <stdio.h>

int main() {

	long n, a, b, anos;
	double ca, cb, multA, multB;

	scanf("%li", &n);

	while(n>0){
		scanf("%li %li", &a, &b);
		scanf("%lf %lf", &ca, &cb);

		anos=0;

		while(a<=b && anos<101){
			multA= (ca*a)/100.0;
			multB= (cb*b)/100.0;
			a+= multA;
			b+= multB;
			anos++;
		}

		if(anos>100){
			printf("Mais de 1 seculo.\n");
		}
		else{
			printf("%li anos.\n", anos);
		}

		n--;
	}

    return 0;
}
