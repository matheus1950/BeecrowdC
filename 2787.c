#include <stdio.h>

int main() {

    int l, c;
    scanf("%d %d", &l, &c);

    ((l + c) % 2 == 0) ? printf("1\n") : printf("0\n");

    return 0;
}
