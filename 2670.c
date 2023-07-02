#include <stdio.h>

int main() {

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if(A > C + B)
        printf("%d\n", (B + (C * 2)) * 2);

    else if(C > A + B)
        printf("%d\n", (B + (A * 2)) * 2);

    else
        printf("%d\n", (C + A) * 2);

    return 0;
}
