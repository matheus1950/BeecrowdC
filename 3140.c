#include <stdio.h>
#include <string.h>

int main()
{
    char string[1001], imprime[1001];

    while(fgets(string, 1001, stdin) != NULL){

        if(strstr(string, "<body>") != NULL){

            fgets(imprime, 1001, stdin);
            while(strstr(imprime, "</body>") == NULL){
                printf("%s", imprime);
                fgets(imprime, 1001, stdin);
            }

        }

    }

    return 0;
}
