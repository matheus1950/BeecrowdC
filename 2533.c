#include <stdio.h>

int main() {
    int T, N, C;

    while(scanf("%i", &T) != EOF){
        double numerador = 0, denominador = 0;

        while(T > 0){
            scanf("%i %i", &N, &C);

            numerador += N * C;
            denominador += C;

            T--;
        }
        printf("%.4lf\n", numerador/(denominador*100));
    }

    return 0;
}
