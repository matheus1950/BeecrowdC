#include <stdio.h>

int main() {

	int N;
	float a, b, c, media;

	scanf("%i", &N);

	while(N>=1){
		scanf("%f %f %f", &a, &b, &c);
		media= (a*2 + b*3 + c*5)/10;
		printf("%.1f\n", media);
		N--;
	}

    return 0;
}
