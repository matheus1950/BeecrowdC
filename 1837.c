#include <stdio.h>
#include <math.h>

int main() {

   int a, b, resto = 0, quociente = 0;

   scanf("%i %i", &a, &b);

   quociente = a/b;

   resto = a - quociente * b;

   if(resto >= 0)
    printf("%i %i\n", quociente, resto);
   else{
        if(b < 0)
            quociente = a/b + 1;
        else
            quociente = a/b - 1;

        resto = ((quociente * b) - a) * -1;

        printf("%i %i\n", quociente, resto);
   }


    return 0;
}
