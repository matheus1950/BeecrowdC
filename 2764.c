#include <stdio.h>

int main() {

    int a, b, c;

    while(scanf("%d/%d/%d", &a, &b, &c) != EOF){

        printf("%02d/%02d/%02d\n", b, a, c);

        printf("%02d/%02d/%02d\n", c, b, a);

        printf("%02d-%02d-%02d\n", a, b, c);

    }

    return 0;
}
