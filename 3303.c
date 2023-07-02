#include <stdio.h>
#include <string.h>

int main() {
    char string[21];

    fgets(string, 21, stdin);
    (strlen(string) - 1) >= 10? printf("palavrao\n") : printf("palavrinha\n");

    return 0;
}
