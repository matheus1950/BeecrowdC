#include <stdio.h>

int main() {

	double r, V;

	scanf("%lf", &r);

	V= (4/3.0) * 3.14159 * r * r * r;

	printf("VOLUME = %.3lf\n", V);
    return 0;
}
