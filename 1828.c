#include <stdio.h>
#include <string.h>

int main() {
    int T, i = 1;
    char jogada[20], jogada1[10], jogada2[10];
    char *token;

    scanf("%i", &T);
    getchar();

    while(i <= T){
        fgets(jogada, 20, stdin);


        token = strtok(jogada, " ");

        int j = 0;

        while(token != NULL){
            if(j == 0)
                strcpy(jogada1, token);
            else
                strcpy(jogada2, token);

            j++;

            token = strtok(NULL, " ");
        }

        for(int w = 0; w < 10; w++){ //para tirar o '\n' que está indo ao final da 2ª string
            if(jogada2[w] == '\n'){
                jogada2[w] = '\0';
                break;
            }
        }


        if(strcmp(jogada1, jogada2) == 0)
            printf("Caso #%i: De novo!\n", i);

        else{
            if(strcmp(jogada1, "tesoura") == 0){ //tesoura
                if(strcmp(jogada2, "papel") == 0 || strcmp(jogada2, "lagarto") == 0){
                    printf("Caso #%i: Bazinga!\n", i);
                }
                else
                     printf("Caso #%i: Raj trapaceou!\n", i);
            }

            else if(strcmp(jogada1, "papel") == 0){ //papel
                if(strcmp(jogada2, "pedra") == 0 || strcmp(jogada2, "Spock") == 0){
                    printf("Caso #%i: Bazinga!\n", i);
                }
                else
                     printf("Caso #%i: Raj trapaceou!\n", i);
            }

            else if(strcmp(jogada1, "pedra") == 0){ //pedra
                if(strcmp(jogada2, "lagarto") == 0 || strcmp(jogada2, "tesoura") == 0){
                    printf("Caso #%i: Bazinga!\n", i);
                }
                else
                    printf("Caso #%i: Raj trapaceou!\n", i);
            }

            else if(strcmp(jogada1, "lagarto") == 0){ //lagarto
                if(strcmp(jogada2, "Spock") == 0 || strcmp(jogada2, "papel") == 0){
                    printf("Caso #%i: Bazinga!\n", i);
                }
                else
                    printf("Caso #%i: Raj trapaceou!\n", i);
            }

            else if(strcmp(jogada1, "Spock") == 0){ //Spock
                if(strcmp(jogada2, "tesoura") == 0 || strcmp(jogada2, "pedra") == 0){
                    printf("Caso #%i: Bazinga!\n", i);
                }
                else
                    printf("Caso #%i: Raj trapaceou!\n", i);
            }

        }

        i++;
    }

    return 0;
}
