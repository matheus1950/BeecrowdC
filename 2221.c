#include <stdio.h>

int main() {

    int T, B;
    int A, D, L, A1, D1, L1;

    scanf("%i", &T);

    while(T > 0){
        scanf("%i", &B);
        scanf("%i %i %i", &A, &D, &L);
        scanf("%i %i %i", &A1, &D1, &L1);

        if(L % 2 == 0) L = B;
        else L = 0;

        if(L1 % 2 == 0) L1 = B;
        else L1 = 0;

        if((L + D + A) > (L1 + D1 + A1))
            printf("Dabriel\n");
        else if((L + D + A) < (L1 + D1 + A1))
            printf("Guarte\n");
        else
            printf("Empate\n");

        T--;
    }

    return 0;
}
