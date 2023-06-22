#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, m4 = 0, m3 = 0, m2 = 0, m5 = 0;
    scanf("%i", &N);

    int *V = malloc(sizeof(int)*N);

    for(int i = 0; i < N; i++){
        scanf("%i", &V[i]);
    }

    for(int i = 0; i < N; i++){
        if(V[i]%2 == 0)
            m2++;
        if(V[i]%3 == 0)
            m3++;
        if(V[i]%4 == 0)
            m4++;
        if(V[i]%5 == 0)
            m5++;
    }

    printf("%i Multiplo(s) de 2\n%i Multiplo(s) de 3\n%i Multiplo(s) de 4\n%i Multiplo(s) de 5\n", m2, m3, m4, m5);

    return 0;
}
