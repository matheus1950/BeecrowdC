#include <stdio.h>
#define tam 12

int main() {

    char C;

    scanf("%c", &C);

    int denominador = 0, aux;
    double Media = 0,  M[tam][tam], Soma = 0;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    aux = 5;
    for(int i = 1; i < tam - 1; i++){
        if(i <= 5){
            for(int j = 0; j < i; j++){
                Soma += M[i][j];
                denominador++;
            }
        }
        else{
            for(int j = 0; j < aux; j++){
                Soma += M[i][j];
                denominador++;
            }
            aux--;
        }
    }

    Media = Soma/denominador;

    C == 'S'? printf("%.1lf\n", Soma) : printf("%.1lf\n", Media);


    return 0;
}
