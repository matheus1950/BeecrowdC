#include <stdio.h>

int main() {
    int T, N;

    while(scanf("%i", &T) && T != 0){

        while(T > 0){

            scanf("%i", &N);

            if(N % 2 != 0)
                printf("%i\n", (N*2) - 1);
            else
                printf("%i\n", (N*2) - 2);

            T--;
        }
    }

    return 0;
}
