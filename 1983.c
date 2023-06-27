#include <stdio.h>

int main() {

    int N, matricula, matriculaMaior;
    double nota, maior = 0;
    scanf("%i", &N);

    while(N > 0){
        scanf("%i %lf", &matricula, &nota);

        if(nota >= 8 && nota > maior){
            maior = nota;
            matriculaMaior = matricula;
        }

        N--;
    }

    maior == 0? printf("Minimum note not reached\n") : printf("%i\n", matriculaMaior);

    return 0;
}
