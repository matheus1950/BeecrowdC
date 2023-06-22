#include <stdio.h>
#include <string.h>

int main() {

    int C, inteiro;
    char string[40];
    scanf("%i", &C);
    getchar();


    while(C > 0){
        fgets(string, 40, stdin);

        char *tok = strtok(string, " ");

        if(strcmp("Thor", tok) == 0)
            printf("Y\n");
        else
            printf("N\n");

        C--;
    }

    return 0;
}
