#include <stdio.h>

int main()
{
    double flot;
    int N, centavos;

    scanf("%lf", &flot);

    N= flot;
    centavos= flot*100 - N*100;

    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", N/100);
    N= N%100;
    printf("%i nota(s) de R$ 50.00\n", N/50);
    N= N%50;
    printf("%i nota(s) de R$ 20.00\n", N/20);
    N= N%20;
    printf("%i nota(s) de R$ 10.00\n", N/10);
    N= N%10;
    printf("%i nota(s) de R$ 5.00\n", N/5);
    N= N%5;
    printf("%i nota(s) de R$ 2.00\n", N/2);

    N= N%2;
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", N);

    printf("%i moeda(s) de R$ 0.50\n", centavos/50);
    centavos= centavos%50;
    printf("%i moeda(s) de R$ 0.25\n", centavos/25);
    centavos= centavos%25;
    printf("%i moeda(s) de R$ 0.10\n", centavos/10);
    centavos= centavos%10;
    printf("%i moeda(s) de R$ 0.05\n", centavos/5);
    centavos= centavos%5;
    printf("%i moeda(s) de R$ 0.01\n", centavos);


    return 0;
}
