#include <stdio.h>
//versão recursiva - mesma lógica de raiz quadrada de 2(2166), que também conta com versão iterativa, por isso não repetirei essa versão aqui!
double continuada(int n);

int main(){

    int n;
    scanf("%i", &n);

    printf("%.10lf\n",continuada(n) + 3);

    return 0;
}

double continuada(int n){
    if(n == 0)
        return 0;
    else
        return 1/(6 + continuada(n - 1));
}
