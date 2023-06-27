#include <stdio.h>

int main() {

    int N;
    scanf("%i", &N);

    while(N > 0){
        int hora, minuto, porta;
        scanf("%i %i %i", &hora, &minuto, &porta);

        printf("%02i:%02i - ", hora, minuto);

        porta == 1? printf("A porta abriu!\n") : printf("A porta fechou!\n");

        N--;
    }

    return 0;
}
