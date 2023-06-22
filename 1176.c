#include <stdio.h>
#define max 100
int main()
{
	long N, termo, i;
	unsigned long long int v[max];
	scanf("%li", &N);

	while(N>0){
		scanf("%li", &termo);
		i=2;

		while(max>i){
			v[i]= 0;

			i++;
		}

		i=2;

		v[0]= 0;
		v[1]= 1;

		if(i>termo){
			printf("Fib(%li) = %llu\n", termo, v[termo]);
		}

		while(termo>=i){
			v[i]= v[i-1] + v[i-2];

			if(i==termo){
			printf("Fib(%li) = %llu\n", i, v[i]);
			}
			i++;
		}

		N--;
	}
    return 0;
}
