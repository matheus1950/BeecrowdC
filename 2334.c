#include <stdio.h>

int main() {

   long long unsigned int P;
   while(scanf("%llu", &P) && P != -1){
       P == 0? printf("0\n") : printf("%llu\n", P - 1);
   }

    return 0;
}
