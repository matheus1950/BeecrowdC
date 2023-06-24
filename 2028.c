#include <stdio.h>

int main() {

    int N, caso = 1;

    while(scanf("%i", &N) != EOF){

        int numeros = 1;

        for(int i = 1; i <= N; i++){
            numeros += i;
        }

        (numeros == 1)? printf("Caso %i: %i numero\n", caso, numeros) : printf("Caso %i: %i numeros\n", caso, numeros);

        printf("0");

        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= i; j++){
                printf(" %i", i);
            }
        }
        printf("\n\n");

        caso++;
    }

    return 0;
}
