#include <stdio.h>
#include <stdlib.h>

int main() {

    char string[8];
    int soma = 0, num, saiu = 0, voltou = 0;

    while(fgets(string, 8, stdin) && string[0] != 'A'){

        scanf("%i", &num);

        if(string[0] == 'S'){
            soma += num;
            saiu++;
        }
        else if(string[0] == 'V'){
            soma -= num;
            voltou++;
        }
    }

    printf("%i\n", soma);
    printf("%i\n", saiu - voltou);

    return 0;
}
