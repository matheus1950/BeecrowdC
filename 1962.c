#include <stdio.h>

int main() {
    int N, ano;
    scanf("%i", &N);

    while(N > 0){
        scanf("%i", &ano);

        ano -= 2015;

        ano >= 0? printf("%i A.C.\n", ano + 1) : printf("%i D.C.\n", -ano);

        N--;
    }

    return 0;
}
