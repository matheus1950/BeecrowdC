#include <stdio.h>
#include <string.h>

int main() {

    int T;
    char nome[25];

    scanf("%d", &T);
    getchar();

    while(T > 0){
        fgets(nome, 25, stdin);

        if(strcmp(nome, "Batmain\n") == 0)
            printf("N\n");
        else
            printf("Y\n");

        T--;
    }

    return 0;
}
