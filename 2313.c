#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B, C;
    scanf("%i %i %i", &A, &B, &C);

    if((A <= abs(B - C) || A >= B + C) && (B <= abs(C - A) || B >= C + A) && (C <= abs(B - A) || C >= B + A))
        printf("Invalido\n");
    else{
        printf("Valido-");
        if(A == B && B == C)
            printf("Equilatero\n");
        else if(A != B && B != C && C != A)
            printf("Escaleno\n");
        else
            printf("Isoceles\n");

        (A == sqrt(pow(B,2) + pow(C,2)) || B == sqrt(pow(C,2) + pow(A,2)) || C == sqrt(pow(B,2) + pow(A,2)))?
            printf("Retangulo: S\n") : printf("Retangulo: N\n");
    }
    return 0;
}
