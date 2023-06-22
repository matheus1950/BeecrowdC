#include <stdio.h>
#include <string.h>

int main() {

char string[1001];

    while(fgets(string, 1001, stdin)){

        int parenteses = 0, tamanho = 0, fechamentoAntesDeAbertura = 0;

        tamanho = strlen(string);

        for(int i = 0; i < tamanho; i++){
            if(string[i] == '(')
                parenteses++;
            else if(string[i] == ')'){
                if(parenteses <= 0){
                   fechamentoAntesDeAbertura++;
                   break;
                }
                parenteses--;
            }
        }

        (fechamentoAntesDeAbertura > 0 || parenteses > 0)?printf("incorrect\n"):printf("correct\n");

    }

    return 0;
}
