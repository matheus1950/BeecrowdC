#include <stdio.h>
#include <string.h>

int main() {
    char texto[502];

    fgets(texto, 502, stdin);

    ((strlen(texto) - 1) <= 80)? printf("YES\n") : printf("NO\n");

    return 0;
}
