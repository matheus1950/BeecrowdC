#include <stdio.h>

int main() {
    int N, voto;

    while(scanf("%d", &N) != EOF){
        int somaVoto = 0;

        for(int i = 1; i <= N; i++){
            scanf("%d", &voto);

            somaVoto += voto;
        }

        somaVoto >= (2*N)/3.0 ? printf("impeachment\n") : printf("acusacao arquivada\n");
    }

    return 0;
}
