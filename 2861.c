#include <stdio.h>
#include <string.h>

int main() {
    int C;
    char string[200];

    scanf("%i", &C);

    while(C >= 0){
    fgets(string, 200, stdin);

    if(strchr(string, '?'))
        printf("gzuz\n");

        C--;
    }

    return 0;
}
