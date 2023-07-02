#include <stdio.h>

int main() {
    int T;
    float saque[2] = {0}, bloqueio[2] = {0}, ataque[2] = {0};
    float s, b, a;
    char nome[30];

    scanf("%d", &T);

    while(T > 0){
        getchar();
        fgets(nome, 30, stdin);

        scanf("%f %f %f", &s, &b, &a);
        saque[0] += s;
        bloqueio[0] += b;
        ataque[0] += a;

        scanf("%f %f %f", &s, &b, &a);
        saque[1] += s;
        bloqueio[1] += b;
        ataque[1] += a;

        T--;
    }
    printf("Pontos de Saque: %.2f %%.\n", saque[1]/saque[0] * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", bloqueio[1]/bloqueio[0] * 100);
    printf("Pontos de Ataque: %.2f %%.\n", ataque[1]/ataque[0] * 100);

    return 0;
}
