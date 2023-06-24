#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, P;
    scanf("%i %i", &P, &N);

    int alturas[N];

    for(int i = 0; i < N; i++){
        scanf("%i", &alturas[i]);

        if(i && P < abs(alturas[i] - alturas[i - 1])){
            printf("GAME OVER\n");
            break;
        }
        else if(i == N - 1)
            printf("YOU WIN\n");
    }

    return 0;
}
