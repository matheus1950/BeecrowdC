#include <stdio.h>
#define max 12
int main()
{
    float matriz[max][max], soma=0, media;
    char T;
    int i=0, j=0, a=0, C;

    scanf("%i", &C);
    scanf(" %c", &T);

    while(a<max){
		while(j<max){
			scanf("%f", &matriz[a][j]);

			j++;
		}
		j=0;
		a++;
    }

    while(i<max){
		soma+= matriz[i][C];
		i++;
    }


    if(T== 'M'){
		media= soma/max;

		printf("%.1f\n", media);
    }

    if(T== 'S'){
    	printf("%.1f\n", soma);
    }


    return 0;
}

