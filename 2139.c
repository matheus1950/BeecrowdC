#include <stdio.h>

int main() {

    int mes, dia;
    int meses[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(scanf("%i %i", &mes, &dia) != EOF){
        int somaDias = 0;

            for(int i = 0; i < mes; i++){
                if(mes - 1 == i)
                    somaDias += dia;
                else
                    somaDias += meses[i];
            }

            if(somaDias == 359)
                printf("E vespera de natal!\n");
            else if(somaDias > 360)
                printf("Ja passou!\n");
            else if(somaDias == 360)
                printf("E natal!\n");
            else
                 printf("Faltam %i dias para o natal!\n", 360 - somaDias);
    }

    return 0;
}
