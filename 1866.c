#include <stdio.h>

int main() {
    int N, num;
    scanf("%i", &N);

    while(N > 0){
        scanf("%i", &num);
        (num % 2 == 0)?printf("0\n"):printf("1\n");
        N--;
    }
    return 0;
}
