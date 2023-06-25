#include <stdio.h>

int main() {

    int M, A, B, C, maior;

    scanf("%i %i %i", &M, &A, &B);

    C = M - (A + B);

    if(C >= A && C >= B)
        maior = C;
    else if(B >= A && B >= C)
        maior = B;
    else
        maior = A;

    printf("%i\n", maior);

    return 0;
}
