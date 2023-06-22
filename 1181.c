#include <stdio.h>
#define max 12
int main()
{
    float matriz[max][max], soma=0, media;
    char T;
    int i=0, j=0, a=0, L;

    scanf("%i", &L);
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
		soma+= matriz[L][i];
		i++;
    }


    if(T== 'M'){
		media= soma/max;

		printf("%.1f\n", media);
    }

    if(T== 'S'){

    }

    return 0;
}
