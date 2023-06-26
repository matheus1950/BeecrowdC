#include <stdio.h>
#include <stdlib.h>

int main() {
    int segundos, atraso, minutos, hora;
    char minutosC[4], horaC[2];

    while(scanf("%s:%s", horaC, minutosC) != EOF){
        hora = atoi(horaC);
        minutos = atoi(minutosC);

        segundos = hora*3600 + minutos*60;

        if(segundos <= 25200)
            atraso = 0;
        else
            atraso = segundos - 25200;

        printf("Atraso maximo: %i\n", atraso/60);
    }
    return 0;
}
