#include <stdio.h>

int main() {

    long long int N, soma = 0, posicaoTotal = 0;
    scanf("%lli", &N);

    long int X[N - 1], posicao[N - 1];

    for(int i = 0; i < N; i++){
        scanf("%lli", &X[i]);
        posicao[i] = 0;
    }

    for(int i = 0; i >= 0 && i < N; ){
        if(X[i] >= 1){

            if(posicao[i] == 0){
                posicao[i] = 1;
                posicaoTotal++;
            }

            X[i]--;

            if(X[i] % 2)
                i--;
            else
                i++;
        }
        else
            break;
    }

    for(int i = 0; i < N; i++){
        soma += X[i];
    }

    printf("%lli %lli\n", posicaoTotal, soma);



    return 0;
}
