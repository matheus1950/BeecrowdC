#include <stdio.h>

int main() {

    char Uri[50] = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", Uri);
    printf("<%30s>\n", Uri);
    printf("<%.20s>\n", Uri);
    printf("<%-20s>\n", Uri);
    printf("<%-30s>\n", Uri);
    printf("<%.30s>\n", Uri);
    printf("<%30.20s>\n", Uri);
    printf("<%-30.20s>\n", Uri);

    return 0;
}
