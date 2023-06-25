#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//versão iterativa
int main(){

    int n;
    double fracao = 0;

    scanf("%i", &n);

    while(n > 0){
        fracao += 2;
        fracao = 1/fracao;

       n--;
    }

    printf("%.10lf\n", fracao + 1);

    return 0;
}

