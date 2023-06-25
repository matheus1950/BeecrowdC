#include <stdio.h>
//versão recursiva
double continuada(int n);

int main(){

    int n;
    scanf("%i", &n);

    printf("%.10lf\n",continuada(n) + 1);

    return 0;
}

double continuada(int n){
    if(n == 0)
        return 0;
    else
        return 1/(2 + continuada(n - 1));
}
