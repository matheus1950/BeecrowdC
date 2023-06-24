#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int XF, YF, XI, YI, vI, rU, rC, pega;
    double d;


    while(scanf("%i %i %i %i %i %i %i", &XF, &YF, &XI, &YI, &vI, &rU, &rC) != EOF){

        d = sqrt(pow((XF - XI), 2) + pow((YF - YI), 2));

        (rU + rC >= d + (vI*1.5))? printf("Y\n") : printf("N\n");
    }

    return 0;
}
