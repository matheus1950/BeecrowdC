#include <stdio.h>

int fibonacci(int n, int *calls);

int main() {
    int n, T;

    scanf("%i", &T);

    while(T > 0){
        int calls = 0;

        scanf("%i", &n);

        printf("fib(%i) = %i calls = %i\n", n, calls - 1, fibonacci(n , &calls));

        T--;
    }

    return 0;
}

int fibonacci(int n, int *calls){

    if(n == 0){
        (*calls)++;
        return 0;
    }
    else if(n == 1){
        (*calls)++;
        return 1;
    }
    else{
        (*calls)++;
        return fibonacci(n - 1, calls) + fibonacci(n - 2, calls);
    }
}
