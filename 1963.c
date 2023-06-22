#include <stdio.h>

int main() {

    float a, b, percent;

    scanf("%f %f", &a, &b);

    percent = ((b - a) * 100)/a;

    printf("%.2f%\n", percent);
    return 0;
}
