#include <stdio.h>

int main() {

    int N;
    while(scanf("%i", &N) != EOF){

        float maior = 0, duracao, distancia;

        for(int i = 0; i < N; i++){
            scanf("%f %f", &duracao, &distancia);

            if(distancia/duracao > maior){
                maior = distancia/duracao;
                printf("%i\n", i + 1);
            }
        }
    }

    return 0;
}
