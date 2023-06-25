#include <stdio.h>

int main() {

   int f, s, g, u, d, steps;
   scanf("%i %i %i %i %i", &f, &s, &g, &u, &d);

    if(g == s)
        printf("0\n");
    else if(g > s){
        if(u == 0 || u + s > f || ((d >= u && (g - s) % u != 0) && ((g - s) % (u - d) != 0)))
            printf("use the stairs\n");
        else{
            steps = (g - s)/u;

            if((g - s) % u > 0)
                steps += (((g - s) % u)/(u - d)) * 2;

            printf("%i\n", steps);
        }
   }
    else{
        if(d == 0 || s - d < 1 || ((u >= d && (s - g) % d != 0) && ((s - g) % (d - u) != 0)))
            printf("use the stairs\n");
        else{
            steps = (s - g)/d;

            if((s - g) % d > 0)
                steps += (((s - g) % d)/(d - u)) * 2;

                printf("%i\n", steps);
        }
   }


    return 0;
}
