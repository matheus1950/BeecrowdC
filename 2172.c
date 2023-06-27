#include <stdio.h>

int main() {
    int mult, xp;

    while(scanf("%i %i", &mult, &xp) && (mult != 0 || xp != 0)){
        printf("%i\n", mult * xp);
    }

    return 0;
}
