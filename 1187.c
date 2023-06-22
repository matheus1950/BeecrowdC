#include <stdio.h>
#define tam 12

int main() {

    char C;

    scanf("%c", &C);

    int total = tam, denominador = 0;
    double Media = 0,  M[tam][tam], Soma = 0;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(int i = 0; i < tam/2 - 1; i++){
        for(int j = i + 1; j < total - 1; j++){
            Soma += M[i][j];
            denominador++;
        }
        total--;
    }

    Media = Soma/denominador;

    C == 'S'? printf("%.1lf\n", Soma) : printf("%.1lf\n", Media);


    return 0;
}
