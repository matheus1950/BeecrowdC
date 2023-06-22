#include <stdio.h>
#include <string.h>

int main() {
    int Q, a, b, soma = 0;

    scanf("%i", &Q);

    while(Q > 0){

        char string[30];
        char stringSeparada[4][30];
        getchar();
        fgets(string, 30, stdin);
        sscanf(string, "%s %s %s %s", stringSeparada[0], stringSeparada[1], stringSeparada[2], stringSeparada[3]);

        scanf("%i %i", &a, &b);

        soma = a + b;

        if(soma % 2 == 0){
            if(strcmp(stringSeparada[1], "PAR") == 0)
                puts(stringSeparada[0]);
            else
                puts(stringSeparada[2]);
        }
        else{
            if(strcmp(stringSeparada[1], "IMPAR") == 0)
                puts(stringSeparada[0]);
            else
                puts(stringSeparada[2]);
        }
        Q--;
    }
    return 0;
}
