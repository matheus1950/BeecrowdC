#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    ((a + c == b || a + b == c || b + c == a) || (a == b || b == c || c == a))?
    printf("S\n") : printf("N\n");

    return 0;
}
