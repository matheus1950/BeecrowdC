#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

	int N, inicioMetade;
	char string[1001];

    scanf("%i", &N);
    getchar();

    while(N > 0){

        fgets(string, 1001, stdin);

        int i = 0, j = strlen(string) - 1;
        char aux;

        for(i = 0; i < strlen(string) - 1; i++){ //passo 1
        	if(isalpha(string[i]))
        		string[i] += 3;
        }

        for(i = 0, j = strlen(string) - 2; i < j; i++, j--){ //passo 2
			aux = string[i];
			string[i] = string[j];
			string[j] = aux;
        }

        if(strlen(string) % 2 == 0)
            inicioMetade = strlen(string)/2 - 1;
        else
            inicioMetade = strlen(string)/2;

        for(i = inicioMetade; i <= strlen(string) - 2; i++){ //passo 3
        	string[i] --;
        }

        fputs(string, stdout);

       N--;
    }

    return 0;
}
