#include <stdio.h>

int main() {
    int N;
    scanf("%i", &N);
    int vetor[N],i = 0;

    while(i < N){
        scanf("%i", &vetor[i]);
        i++;
    }

    int menor = vetor[0], posicao = 1;

    for(int i = 1; i < N; i++){
       if(vetor[i] < menor){
        menor = vetor[i];
        posicao = i + 1;
       }
    }

    printf("%i\n", posicao);
    return 0;
}
