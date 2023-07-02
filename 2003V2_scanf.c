#include <stdio.h>

int main() {
    int segundos, minutos, hora, atraso;

    while(scanf("%d:%d", &hora, &minutos) != EOF){

        segundos = hora*3600 + minutos*60;

        if(segundos <= 25200)
            atraso = 0;
        else
            atraso = segundos - 25200;

        printf("Atraso maximo: %d\n", atraso/60);
    }
    return 0;
}
