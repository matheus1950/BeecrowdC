#include <stdio.h>

int main()
{
    int N1, N2, N3, N4, N, denominador, numerador, denominadorMenor, numeradorMenor;
    char string[1000], operador;

    scanf("%i", &N);

    getchar();

    while(N > 0){

        fgets(string, 1000, stdin);

        sscanf(string, "%i / %i %c %i / %i", &N1, &N2, &operador, &N3, &N4);

        if(operador == '*'){
            numerador = N1 * N3;
            denominador = N2 * N4;

            denominadorMenor = denominador;
            numeradorMenor = numerador;

            for(int i = 2; i < 99; i++){
                if(denominadorMenor % i == 0 && numeradorMenor % i == 0){
                    denominadorMenor /= i;
                    numeradorMenor /= i;
                    i = 1;
                }
            }
            printf("%i/%i = %i/%i\n", numerador, denominador, numeradorMenor, denominadorMenor);
        }

        else if(operador == '/'){
            denominador = N2 * N3;
            numerador = N1 * N4;

            denominadorMenor = denominador;
            numeradorMenor = numerador;

            for(int i = 2; i < 99; i++){
                if(denominadorMenor % i == 0 && numeradorMenor % i == 0){
                    denominadorMenor /= i;
                    numeradorMenor /= i;
                    i = 1;
                }
            }

            printf("%i/%i = %i/%i\n", numerador, denominador, numeradorMenor, denominadorMenor);
        }

        else if(operador == '+'){
            denominador = N2 * N4;
            numerador = (N1 * N4 + N2 * N3);

            denominadorMenor = denominador;
            numeradorMenor = numerador;
            for(int i = 2; i < 99; i++){
                if(denominadorMenor % i == 0 && numeradorMenor % i == 0){
                    denominadorMenor /= i;
                    numeradorMenor /= i;
                    i = 1;
                }
            }

            printf("%i/%i = %i/%i\n", numerador, denominador, numeradorMenor, denominadorMenor);
        }

        else{
            denominador = N2 * N4;
            numerador = (N1 * N4 - N2 * N3);

            denominadorMenor = denominador;
            numeradorMenor = numerador;
            for(int i = 2; i < 99; i++){
                if(denominadorMenor % i == 0 && numeradorMenor % i == 0){
                    denominadorMenor /= i;
                    numeradorMenor /= i;
                    i = 1;
                }
            }

            printf("%i/%i = %i/%i\n", numerador, denominador, numeradorMenor, denominadorMenor);
        }

        N--;
    }

    return 0;
}
