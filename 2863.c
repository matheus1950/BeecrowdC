#include <stdio.h>

int main() {
    int T;
    float numero, menor;

    while(scanf("%d", &T) != EOF){
        menor = 11;

        while(T > 0){
            scanf("%f", &numero);

            if(numero < menor)
                menor = numero;

            T--;
        }

        printf("%.2f\n", menor);
    }

    return 0;
}
