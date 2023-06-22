#include <stdio.h>

int main() {
    int C1, C2, C3, C4;

    scanf("%i %i %i %i", &C1, &C2, &C3, &C4);

    if(C1 == 1)
        printf("1\n");
    else if(C2 == 1)
        printf("2\n");
    else if(C3 == 1)
        printf("3\n");
    else
        printf("4\n");

    return 0;
}
