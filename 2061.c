#include <stdio.h>

int main() {
    int T, N;
    char acao[8];
    scanf("%i %i", &N, &T);

    while(T > 0){
        fgets(acao, 8, stdin);

        if(acao[0] == 'f')
            N++;
        else
            N--;

        T--;
    }

    printf("%i\n", N);

    return 0;
}
