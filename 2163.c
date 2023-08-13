#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[1000][1000], l, c, cont;

    scanf("%d %d", &l, &c);

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(matriz[i][j] == 42){
                cont = 0;
                for(int x = -1; x <= 1; x++){
                    for(int y = -1; y <= 1; y++){
                        if((x != 0 || y != 0) && (i + x < l && j + y < c)){
                            if(matriz[i + x][j + y] == 7)
                                cont++;
                        }
                    }
                    if(cont == 8){
                        printf("%d %d\n", i + 1, j + 1);
                        exit(0);
                    }
                }
            }
        }
    }

    printf("0 0\n");

    return 0;
}
