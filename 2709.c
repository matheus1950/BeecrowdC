#include <stdio.h>
#include <stdlib.h>

int main() {
    int M;

    while(scanf("%i", &M) != EOF){

        int *V = malloc(sizeof(int) * M);

        int soma = 0, ehPrimo = 0, N = 0, i = 0;

        while(i < M){
            scanf("%i", &V[i]);
            i++;
        }

        scanf("%i", &N);
        M -= 1;

        while(M >= 0){
            soma += V[M];
            M -= N;
        }

        int somaAux = soma;

        while(somaAux > 0){
            if(soma % somaAux == 0){
                ehPrimo++;
            }
            somaAux--;
        }

        free(V);

        if(ehPrimo == 2)
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        else
            printf("Bad boy! I’ll hit you.\n");

    }

    return 0;
}
