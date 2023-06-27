#include <stdio.h>
#include <math.h>

int main() {

    int r1, x1, y1, r2, x2, y2;
    float distancia2P;

    while(scanf("%i %i %i %i %i %i", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
        distancia2P = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

        (r1 >= r2 + distancia2P)? printf("RICO\n") : printf("MORTO\n");
    }

    return 0;
}
