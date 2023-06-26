#include <stdio.h>

int main() {

   char recebido[4];

   for(int i = 0; i < 3; i++){
       recebido[i] = getchar();
       getchar();
   }

   printf("A = %c, B = %c, C = %c\n", recebido[0], recebido[1], recebido[2]);
   printf("A = %c, B = %c, C = %c\n", recebido[1], recebido[2], recebido[0]);
   printf("A = %c, B = %c, C = %c\n", recebido[2], recebido[0], recebido[1]);

    return 0;
}
