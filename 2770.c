#include <stdio.h>

int main() {

    long int X, Y, M, X2, Y2;

    while(scanf("%li %li %li", &X, &Y, &M) != EOF){

        while(M > 0){
            scanf("%li %li", &X2, &Y2);

            ((X2 <= X && Y2 <= Y) || (X2 <= Y && Y2 <= X))? printf("Sim\n") : printf("Nao\n");

            M--;
        }
    }

    return 0;
}
