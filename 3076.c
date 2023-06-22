#include <stdio.h>

int main() {

    long long int N;

    while(scanf("%lli", &N) != EOF){
        int seculo = N/100;

        while(N > seculo * 100){
            seculo += 1;
        }
        printf("%i\n", seculo);
    }

    return 0;
}

