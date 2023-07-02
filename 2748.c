#include <stdio.h>

void trintaNove();

int main()
{
    trintaNove();

    for(int j = 1; j <= 5; j++){
        for(int i = 1; i <= 39; i++){
            if(i == 1)
                printf("|");

            if(i == 10){
                if(j == 1)
                    printf("Roberto"), i += 7;
                else if(j == 3)
                    printf("5786"), i += 4;
                else if(j == 5)
                    printf("UNIFEI"), i += 6;
            }

            if(i == 39)
                printf("|\n");
            else if(i != 1)
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
