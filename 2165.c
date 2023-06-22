#include <stdio.h>
#include <string.h>

int main() {
    char texto[502];

    fgets(texto, 502, stdin);

    ((strlen(texto) - 1) <= 140)? printf("TWEET\n") : printf("MUTE\n");

    return 0;
}
