#include <stdio.h>
#define tam 12

int main() {

    char C;
    int a;

    scanf("%c", &C);

    int total = tam, denominador = 0;
    double Media = 0,  M[tam][tam], Soma = 0;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    a = 1;
    for(int i = tam - 1; i > tam/2; i--){
        for(int j = a; j < total - 1; j++){
            Soma += M[i][j];
            denominador++;
        }
        a++;
        total--;
    }

    Media = Soma/denominador;

    C == 'S'? printf("%.1lf\n", Soma) : printf("%.1lf\n", Media);


    return 0;
}
