#include <stdio.h>

int main() {

	float i=0, j=1, n=1;
	int dez=0;


	while(i<=2.1){
		while(n<=3){
			if(dez==0 || dez==10 || dez==20){
				printf("I=%.0f J=%.0f\n", i, j);
			}
			else{
				printf("I=%.1f J=%.1f\n", i, j);
			}
			j+=1;
			n++;
		}
		n=1; i=i+0.2; j= 1+ i, dez+=2;
	}
    return 0;
}
