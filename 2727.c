#include <stdio.h>

int main() {
    int N;

    while(scanf("%d", &N) != EOF){
        getchar();

        while(N > 0){

            char string[500];
            int ponto = 0, i = 0;

            fgets(string, 500 , stdin);

            while(string[i] != '\0'){

                if(string[i] == '.' && string[i + 1] == '.' && string[i + 2] == '.' && string[i + 3] == ' '){
                    ponto += 3;
                    i += 3;
                }
                else if(string[i] == '.' && string[i + 1] == '.' && string[i + 2] == ' '){
                    ponto += 3;
                    i += 2;
                }
                else if(string[i] == '.' && string[i + 1] == ' '){
                    ponto += 3;
                    i++;
                }
                else if(string[i] == '.')
                    ponto++;


                i++;
            }
            printf("%c\n", 96 + ponto);

            N--;
        }

    }

    return 0;
}
