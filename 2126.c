#include <stdio.h>
#include <string.h>

int main() {
    char valor[99999], valor2[999999];
    int caso = 1, posicao = 0, posicaoConfirmada, k;

    while(scanf("%s", valor) != EOF){

        scanf("%s", valor2);
        int quantidade = 0;

        for(int i = 0; valor2[i] != '\0'; i++){
            if(valor2[i] == valor[0]){
                posicao = i + 1;
                k = i;
                for(int j = 0; valor[j] == valor2[k] && (valor[j] != '\0' && valor2[k] != '\0'); k++, j++){
                    if(j == (strlen(valor) - 1)){
                        quantidade++;
                        posicaoConfirmada = posicao;
                    }
                }
            }
        }

        printf("Caso #%i:\n", caso);
        if(quantidade == 0)
            printf("Nao existe subsequencia\n\n");
        else{
            printf("Qtd.Subsequencias: %i\n", quantidade);
            printf("Pos: %i\n\n", posicaoConfirmada);
        }

        caso++;
    }

    return 0;
}

