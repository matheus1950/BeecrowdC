#include <stdio.h>

int main() {

    int N, resposta;
    scanf("%i", &N);

    for(int i = 1; i <= N; i++){
        scanf("%i", &resposta);
        printf("resposta %i: %i\n", i, resposta);
    }


    return 0;
}
