#include <stdio.h>

int main() {

	int L, V, i=0, maior;


	while(scanf("%i", &L)!=EOF){

		int grupo[L];

		maior= 0;

		while(i<L){

			scanf("%i", &grupo[i]);

			if(grupo[i]>maior){
				maior= grupo[i];
			}

			i++;
		}

		i=0;

		if(maior<10){
			printf("1\n");
		}
		else if(maior>=10 && maior<20){
			printf("2\n");
		}
		else{
			printf("3\n");
		}
	}


    return 0;
}
