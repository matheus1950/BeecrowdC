#include <stdio.h>

int main() {

    int B, G;
    scanf("%i %i", &B, &G);

    if(G/2 <= B)
        printf("Amelia tem todas bolinhas!\n");
    else
        printf("Faltam %i bolinha(s)\n", G/2 - B);

    return 0;
}
