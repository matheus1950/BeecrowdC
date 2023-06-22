#include <stdio.h>
#include<stdlib.h>

int main()
{
float A, B, C;

scanf("%f %f %f", &A, &B, &C);

if(A>abs(B-C) && A<B+C || B>abs(A-C) && B<A+C || C>abs(A-B) && C<A+B){
  printf("Perimetro = %.1f\n", A+B+C);}

else{
 printf("Area = %.1f\n", ((A+B)*C)/2);
}
}
