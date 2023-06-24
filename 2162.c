#include <stdio.h>

int main() {
    int n, cont = 0;
    scanf("%i", &n);
    int h[n];

    for(int i = 0; i < n; i++){
        scanf("%i", &h[i]);
    }

    for(int i = 0; i < n - 1; i++){

        if(h[i + 1] == h[i]){
            cont = -2;
            break;
        }
        else if(h[i + 1] > h[i]){
            cont += 1;
            if(n > i + 2 && h[i + 2] > h[i + 1]){
                cont = -2;
                break;
            }
        }
        else{
            cont -= 1;
            if(n > i + 2 && h[i + 2] < h[i + 1]){
                cont = -2;
                break;
            }
        }
    }


    if(n % 2 != 0)
        cont == 0? printf("1\n") : printf("0\n");
    else
        cont == 1 || cont == -1? printf("1\n") : printf("0\n");

    return 0;
}

