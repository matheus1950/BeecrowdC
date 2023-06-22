#include <stdio.h>

int main() {

	int N, i=1;

	scanf("%i", &N);

	while(i<10000){
		if(i%N==2){
			printf("%i\n", i);
		}
		i++;
	}

    return 0;
}
