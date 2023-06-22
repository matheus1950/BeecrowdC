#include <stdio.h>

int main() {

	int s;

	do{
		scanf("%i", &s);
		if(s==2002){
			printf("Acesso Permitido\n");
		}
		else{
			printf("Senha Invalida\n");
		}
	}while(s!=2002);

    return 0;
}
