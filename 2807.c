#include <stdio.h>

int main() {

    int N, aux = 2;

    scanf("%i", &N);
    int vetor[N];

    vetor[0] = 1, vetor[1] = 1;

    while(aux < N){
        vetor[aux] = vetor[aux - 2] + vetor[aux - 1];
        aux++;
    }

    for(int i = N - 1; i >= 0 ; i--){
        if(i == 0)
            printf("%d\n", vetor[i]);
        else
            printf("%d ", vetor[i]);
    }

    return 0;
}
