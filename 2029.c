#include <stdio.h>
#include <math.h>

int main() {
    double v, d;

    while(scanf("%lf %lf", &v, &d) != EOF){
        printf("ALTURA = %.2lf\n", v/(pow(d/2,2) * 3.14));
        printf("AREA = %.2lf\n", 3.14 * pow(d/2, 2));
    }

    return 0;
}
