#include <stdio.h>

int main() {
    int N, x, d;
    scanf("%i", &N);

    while(N > 0){

        int Maria = 0, Joao = 0;

        for(int i = 3; i > 0; i--){
            scanf("%i %i", &x, &d);
            Joao += x*d;
        }

        for(int i = 3; i > 0; i--){
            scanf("%i %i", &x, &d);
            Maria += x*d;
        }

        Maria > Joao? printf("MARIA\n") : printf("JOAO\n");
        N--;
    }




    return 0;
}
