#include <stdio.h>
#include <math.h>

int main() {

    long long int n;
    scanf("%lli", &n);

    printf("%lli\n", 1 + (n * (n - 1) * (n - 2) * (n - 3))/24 + (n * (n - 1))/2);

    return 0;
}
