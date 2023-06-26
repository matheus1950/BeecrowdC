#include <stdio.h>

int main() {

    int H, Z, L;
    scanf("%i %i %i", &H, &Z, &L);

    if(H < Z && H > L || H < L && H > Z)
        printf("huguinho\n");
    else if(Z < H && Z > L || Z < L && Z > H)
        printf("zezinho\n");
    else
        printf("luisinho\n");


    return 0;
}
