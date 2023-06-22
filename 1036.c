#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    if(A<=0 || (pow(B,2)- 4*A*C)<0){
        printf("Impossivel calcular\n");
    }
    else{

		R1= (B*(-1)+sqrt((pow(B,2)- 4*A*C)))/(A*2);
		R2= (B*(-1)-sqrt((pow(B,2)- 4*A*C)))/(A*2);

		printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }

    return 0;
}
