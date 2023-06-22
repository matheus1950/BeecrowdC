#include <stdio.h>

int main() {

    int N, tomadas, entradas;
    scanf("%i", &N);

    while(N > 0){
        int soma = 1;

        scanf("%i", &tomadas);
        int aux = tomadas;

        while(aux > 0){
            scanf("%i", &entradas);
            soma += entradas;
            aux--;
        }

        soma -= tomadas;
        printf("%i\n", soma);

        N--;
    }

    return 0;
}
