#include <stdio.h>

int main() {

	float a, b, media;

	scanf("%f", &a);

	while(a>10 || a<0){
		if(a>10 || a<0){
			printf("nota invalida\n");
			scanf("%f", &a);
		}
	}

	scanf("%f", &b);

	while(b>10 || b<0){
		if(b>10 || b<0){
			printf("nota invalida\n");
			scanf("%f", &b);
		}
	}

	media= (a+b)/2;
	printf("media = %.2f\n", media);

    return 0;
}
