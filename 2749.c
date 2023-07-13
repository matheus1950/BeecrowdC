#include <stdio.h>

void trintaNove();

int main()
{
    trintaNove();

    for(int j = 1; j <= 5; j++){
        for(int i = 1; i <= 39; i++){
            if(i == 1)
                printf("|");
            else if(i == 2 && j == 1){
                printf("x = 35");
                i += 5;
            }
            else if(i == 17 && j == 3){
                printf("x = 35");
                i += 5;
            }
            else if(i == 33 && j == 5){
                printf("x = 35");
                i += 5;
            }
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
