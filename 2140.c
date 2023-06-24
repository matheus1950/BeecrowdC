#include <stdio.h>

int main() {

    int notas[] = {2, 5, 10, 20, 50, 100};
    int valor = 1, pago = 1, troco;


    while(scanf("%i %i", &valor, &pago) && (valor || pago)){

        int possible = 0;

        troco = pago - valor;

        for(int i = 5; i >= 0; i--){
            for(int j = 5; j >= 0; j--){
                if(troco == notas[i] + notas[j])
                    possible = 1;
            }
        }

        possible? printf("possible\n") : printf("impossible\n");
    }

    return 0;
}
