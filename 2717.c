#include <stdio.h>

int main() {
    int expediente, A, B;

    scanf("%d", &expediente);
    scanf("%d %d", &A, &B);

    (A + B <= expediente)? printf("Farei hoje!\n") : printf("Deixa para amanha!\n");

    return 0;
}
