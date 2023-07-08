#include <stdio.h>

int main() {
    int n, total;

    while(scanf("%d", &n) != EOF){
        int vetor[n], cont = 0;

        total = n - 1;

        for(int j = 0; j <= total; j++){
            for(int i = 0; i <= total; i++){

                if(i == total - cont)
                    vetor[i] = 2;
                else if(i == cont)
                    vetor[i] = 1;
                else
                    vetor[i] = 3;
            }

            for(int k = 0; k <= total; k++){
                printf("%d", vetor[k]);
            }

            printf("\n");

            cont++;
        }


    }

    return 0;
}
