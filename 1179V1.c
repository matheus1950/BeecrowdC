#include <stdio.h>
#define max 5
int main()
{
	int par[max], impar[max], v[15];
	int i=0, p=0, im=0, j, aux1, aux2;

	while(i<15){
		scanf("%i", &v[i]);

		if(v[i]%2==0){
			par[p]= v[i];
			p++;

			if(p==5){
				p=0;

				while(p<5){
				printf("par[%i] = %i\n", p, par[p]);
				p++;
				 }

				p=0;

				while(p<5){
					par[p]= 0;             //verificar como anular
					p++;
				}
				p=0;
			}
		}


		else{
			impar[im]= v[i];
			im++;

			if(im==5){
				im=0;

				while(im<5){
					printf("impar[%i] = %i\n", im, impar[im]);
					im++;
				 }

				im=0;

				while(im<5){
					impar[im]= 0;     //verificar como anular
					im++;
				}
				im=0;
			}
		}

		i++;
	}
						 //impressão do que restou abaixo

	j=0;
	aux1= im;

	while(aux1>j){
		printf("impar[%i] = %i\n", j, impar[j]);
		im++;
		j++;
	}

	j=0;
	aux2= p;

	while(aux2>j){
		printf("par[%i] = %i\n", j, par[j]);
		p++;
		j++;
	}


    return 0;
}
