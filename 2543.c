#include <stdio.h>

int main() {

    int N, jogo, identificador, identificadorPessoal;

    while(scanf("%i %i", &N, &identificadorPessoal) != EOF){
        int CS = 0;
        while(N > 0){
            scanf("%i %i", &identificador, &jogo);
            if(jogo == 0 && identificador == identificadorPessoal)
                CS++;

                N--;
        }
        printf("%i\n", CS);
    }

    return 0;
}
