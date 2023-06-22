#include <stdio.h>

int main() {

    for(int i = 'a', valor = 97; i <= 'z'; i++, valor++){
        printf("%i e %c\n", valor, i);
    }

    return 0;
}
