#include <stdio.h>

int main() {
    long long int N, decimal;
    scanf("%lli", &N);

    while(N > 0){
        scanf("%lli", &decimal);
        int sequencia = 0, maior = 0;

        for(int i = 0; decimal > 0; decimal /= 2){

            if(decimal % 2 == 1){
                sequencia++;

                if(sequencia >= maior)
                    maior = sequencia;
            }
            else
                sequencia = 0;
        }

        printf("%d\n", maior);

        N--;
    }

    return 0;
}
