#include <stdio.h>
#define max 5
int main()
{
	int par[max], impar[max], v[15];
	int i=0, p=0, im=0, j;

	while(i<15){
		scanf("%i", &v[i]);

		 if(v[i]%2==0){     //colocar os valores pares
			 par[p]= v[i];
			 p++;

			 if(p==max){
				 p=0;

				 while(p<max){
					 printf("par[%i] = %i\n", p, par[p]);
					 p++;
				 }

				 p=0;

				 while(p<max){
					 par[p]= 0;
					 p++;
				 }
				 p=0;
			 }
		 }


		 else{         //colocar os valores ímpares
			 impar[im]= v[i];
			 im++;

			 if(im==max){        //se o vetor encher, printa!
				 im=0;

				 while(im<max){
					 printf("impar[%i] = %i\n", im, impar[im]);
					 im++;
				 }

				 im=0;

				 while(im<max){       //depois de printar, esvazia!
					 impar[im]= 0;
					 im++;
				 }
				 im=0;
			 }
		 }

		i++;
	}

	//impressão do que restou abaixo

	j=0;

	while(im>j){
		printf("impar[%i] = %i\n", j, impar[j]);
		j++;
	}

	j=0;

	while(p>j){
		printf("par[%i] = %i\n", j, par[j]);
		j++;
	}


    return 0;
}
