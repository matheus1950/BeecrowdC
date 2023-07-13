#include <stdio.h>

int main() {
    int a, a1, b, b1, c, c1;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &a1, &b1, &c1);

    a = a1 - a;
    if(a <= 0)
        a = 0;

    b = b1 - b;
    if(b <= 0)
        b = 0;

    c = c1 - c;
    if(c <= 0)
        c = 0;

    printf("%d\n", a + b + c);

    return 0;
}
