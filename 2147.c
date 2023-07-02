#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char galopeira[10002];

    scanf("%i", &T);
    getchar();

    while(T > 0){
        fgets(galopeira, 10002, stdin);
        printf("%.2f\n", (strlen(galopeira) - 1)/100.0);

        T--;
    }

    return 0;
}
