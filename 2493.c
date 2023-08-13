#include <stdio.h>
#include <string.h>

void ordena(char naoPassou[][52], int contNaoPassaram);
void limparBuffer();

int main() {
    int N, num1, num2, resultado, indice, contNaoPassaram;
    char operador;

    while(scanf("%d", &N) != EOF){
        limparBuffer();

        char questao[N][22], resposta[57], participante[52], naoPassou[N][52];

        contNaoPassaram = 0;

        for(int i = 0; i < N; i++){
           fgets(questao[i], 22, stdin);
        }

        for(int i = 0; i < N; i++){
            fgets(resposta, 55, stdin);

            sscanf(resposta,"%s %d %c", participante, &indice, &operador);
            sscanf(questao[indice - 1],"%d %d=%d", &num1, &num2, &resultado);

            if(operador == '*' && num1 * num2 == resultado){}

            else if(operador == '-' && num1 - num2 == resultado){}

            else if(operador == '+' && num1 + num2 == resultado){}

            else if(operador == 'I' && (!(num1 + num2 == resultado) && !(num1 - num2 == resultado) && !(num1 * num2 == resultado))){}

            else{
                strcpy(naoPassou[contNaoPassaram], participante);
                contNaoPassaram++;
            }
        }

        ordena(naoPassou, contNaoPassaram);

        if(contNaoPassaram == N)
            printf("None Shall Pass!\n");
        else if(contNaoPassaram == 0)
            printf("You Shall All Pass!\n");
        else{
            for(int i = 0; i < contNaoPassaram; i++){
                printf("%s", naoPassou[i]);

                if(i != contNaoPassaram - 1)
                    printf(" ");
                else
                    printf("\n");
            }
        }

    }

    return 0;
}


void ordena(char naoPassou[][52], int contNaoPassaram){
    char aux[52], menor[52];
    int pos = 0;

    for(int i = 0; i < contNaoPassaram - 1; i++){
        strcpy(menor, naoPassou[i]);
        for(int j = i + 1; j < contNaoPassaram; j++){
            if(strcmp(naoPassou[j], menor) < 0){
                strcpy(menor, naoPassou[j]);
                pos = j;
            }
        }
        if(strcmp(menor, naoPassou[i]) != 0){
            strcpy(naoPassou[pos], naoPassou[i]);
            strcpy(naoPassou[i], menor);
        }
    }
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
