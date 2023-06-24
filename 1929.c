#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, d;
    scanf("%i %i %i %i", &a, &b, &c, &d);


    if((a > abs(b - c) && a <  b + c) || (a > abs(c - d) && a <  c + d) || (a > abs(b - d) && a <  b + d))
        printf("S\n");
    else if((b > abs(a - c) && b <  a + c) || (b > abs(a - d) && b <  a + d) || (b > abs(d - c) && b <  d + c))
        printf("S\n");
    else if((c > abs(a - b) && c <  a + b) || (c > abs(a - d) && c <  a + d) || ( c > abs(b - d) && c <  b + d))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
