#include <stdio.h>
#include <string.h>

int main() {
    int T, N;
    char string[20];

    while(scanf("%d", &T) && T != 0){
        getchar();
        int vitaminaC = 0;

        while(T > 0){
            scanf("%d", &N);
            getchar();

            fgets(string, 20, stdin);

            if(string[0] == 's')
                vitaminaC += N * 120;
            else if(string[0] == 'm' && string[1] == 'o')
                vitaminaC += N * 85;
            else if(!strcmp(string, "mamao\n"))
                vitaminaC += N * 85;
            else if(string[0] == 'g')
                vitaminaC += N * 70;
            else if(!strcmp(string, "manga\n"))
                vitaminaC += N * 56;
            else if(string[0] == 'l')
                vitaminaC += N * 50;
            else
                vitaminaC += N * 34;

            T--;
        }

            if(vitaminaC < 110)
                printf("Mais %d mg\n", 110 - vitaminaC);
            else if(vitaminaC > 130)
                printf("Menos %d mg\n", vitaminaC - 130);
            else
                printf("%d mg\n", vitaminaC);
    }

    return 0;
}
