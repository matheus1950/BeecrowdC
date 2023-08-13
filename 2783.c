#include <stdio.h>

int main() {

    int N, C, M;

    scanf("%d %d %d", &N, &C, &M);

    int vetor[C], vetor2[M], aux = C, cont = C, aux2 = M;


    while(C > 0){
        scanf("%d", &vetor[C]);
        C--;
    }

    while(M > 0){
        scanf("%d", &vetor2[M]);
        M--;
    }

    while(aux > 0){
        int check = 0;

        for(int i = aux2; i > 0; i--){
            if(vetor2[i] == vetor[aux])
                check++;
        }

        if(check >= 1)
            cont--;

        aux--;
    }

    printf("%d\n", cont);

    return 0;
}
