#include <stdio.h>

int main() {
    char string1[1001], string2[1001];
    int cont = 0, cont2 = 0;

    fgets(string1, 1001, stdin);
    fgets(string2, 1001, stdin);

    for(int i = 0; string1[i] != '\0'; i++){
        if(string1[i] == 'a')
            cont++;
    }

    for(int i = 0; string2[i] != '\0'; i++){
        if(string2[i] == 'a')
            cont2++;
    }

    cont >= cont2 ? printf("go\n") : printf("no\n");

    return 0;
}
