#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    double fibonacci;

    scanf("%i", &N);

    fibonacci = (pow((1 + sqrt(5))/2, N) - pow((1 - sqrt(5))/2, N))/sqrt(5);

    printf("%.1lf\n", fibonacci);
    return 0;
}
