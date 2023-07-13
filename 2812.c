#include <stdio.h>

void bubbleSort(int vetor[], int tamanho);

int main() {

    int N, M, vetor[100], num, tam;
    scanf("%d", &N);

    while(N > 0){
        scanf("%d", &M);
        tam = 0;

        for(int i = 0; i < M; i++){
            scanf("%d", &num);

            if(num % 2 != 0){
                vetor[tam] = num;
                tam++;
            }
        }

        bubbleSort(vetor, tam);

        for(int i = 0, j = tam - 1, k = 0; i < tam; i++){
            if(i % 2 == 0){
                printf("%d", vetor[j]);
                j--;
            }
            else{
                printf("%d", vetor[k]);
                k++;
            }

            if(!(i == tam - 1))
            	printf(" ");
        }

        N--;
        printf("\n");
    }

    return 0;
}

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}
