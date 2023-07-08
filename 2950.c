#include <stdio.h>

int main() {
    float num, da, db;
    scanf("%f %f %f", &num, &da, &db);

    printf("%.2f\n", num/(da + db));

    return 0;
}
