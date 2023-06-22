#include <stdio.h>
#include <math.h>

int main()
{
    int N, num, potencia, digitos = 1, resultado;

    scanf("%i", &N);

    while(N > 0){
        digitos = 1;

        scanf("%i %i", &num, &potencia);

        resultado = (int)floor(log10(pow(num, potencia)));

        digitos += resultado;

        printf("%i\n", digitos);

        N--;
    }

    return 0;
}

