#include <stdio.h>

void trintaNove();

int main()
{
    trintaNove();

    for(int j = 1; j <= 5; j++){
        for(int i = 1; i <= 39; i++){
            if(i == 1)
                printf("|");
            else if(i == 39)
                printf("|\n");
            else
                printf(" ");
        }
    }

    trintaNove();

    return 0;
}

void trintaNove(){
    for(int N = 1; N <= 39; N++){
        printf("-");
    }
    printf("\n");
}
