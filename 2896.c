#include <stdio.h>

int main() {

    int T, comprado, vazias, refrigerantes = 0;
    scanf("%i", &T);

    while(T > 0){
        scanf("%i %i", &comprado, &vazias);

        refrigerantes = comprado/vazias + comprado%vazias;

        printf("%i\n", refrigerantes);

        T--;
    }

    return 0;
}
