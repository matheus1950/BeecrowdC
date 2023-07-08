#include <stdio.h>

int main() {

    int N, num;
    scanf("%i", &N);

    while(N > 0){
        scanf("%i", &num);
        if(num > 8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");

        N--;
    }

    return 0;
}
