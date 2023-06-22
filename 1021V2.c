#include <stdio.h>

int main()
{
    double flot;
    int N;

    scanf("%lf", &flot);

    N= flot*100;


    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", N/10000);
    N= N%10000;
    printf("%i nota(s) de R$ 50.00\n", N/5000);
    N= N%5000;
    printf("%i nota(s) de R$ 20.00\n", N/2000);
    N= N%2000;
    printf("%i nota(s) de R$ 10.00\n", N/1000);
    N= N%1000;
    printf("%i nota(s) de R$ 5.00\n", N/500);
    N= N%500;
    printf("%i nota(s) de R$ 2.00\n", N/200);
    N= N%200;


    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", N/100);
    N= N%100;
    printf("%i moeda(s) de R$ 0.50\n", N/50);
    N= N%50;
    printf("%i moeda(s) de R$ 0.25\n", N/25);
    N= N%25;
    printf("%i moeda(s) de R$ 0.10\n", N/10);
    N= N%10;
    printf("%i moeda(s) de R$ 0.05\n", N/5);
    N= N%5;
    printf("%i moeda(s) de R$ 0.01\n", N);


    return 0;
}
