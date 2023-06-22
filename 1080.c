#include <stdio.h>

int main() {

	int n, i=1, m=0, p;

	while(i<=100){
		scanf("%i", &n);
		if(n>m){
			m=n;
			p=i;
		}
		i++;
	}

	printf("%i\n%i\n", m, p);
	return 0;
}
