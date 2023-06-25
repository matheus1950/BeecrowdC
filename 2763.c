#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char string[16];
    char *tok;
    fgets(string, 16, stdin);

    tok = strtok(string, ".-");

    for(int i = 1; i <= 3; i++){

        printf("%03i\n", atoi(tok));

        tok = strtok(NULL, ".-");
    }

    printf("%02i\n", atoi(tok));

    return 0;
}
