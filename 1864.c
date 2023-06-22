#include <stdio.h>

int main() {

    char string[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int N;
    scanf("%i", &N);

    for(int i = 0; i < N; i++){
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
