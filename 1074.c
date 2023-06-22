#include <stdio.h>

int main() {

	int N, X, i=1;

	scanf("%i", &N);

	while(N>=i){
		scanf("%i", &X);
		if(X!=0){
			if(X%2==0){
				printf("EVEN ");
			}
			if(X%2!=0){
				printf("ODD ");
			}
			if(X>0){
				printf("POSITIVE\n");
			}
			if(X<0){
				printf("NEGATIVE\n");
			}
		}
		else{
			printf("NULL\n");
		}
		i++;
	}
    return 0;
}
