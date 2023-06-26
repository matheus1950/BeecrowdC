#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%i", &n);

    printf("%.0f casas brancas e %i casas pretas\n", ceil((float)n*n/2), (n*n)/2);

    return 0;
}
