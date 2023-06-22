#include <stdio.h>

int main()
{
	int x, y, i=1, j=1;

	scanf("%i %i", &x, &y);

	while(y>=i){
		j= 1;

		while(x>=j && y>=i){
			if(x==j){
				printf("%i\n", i);
			}
			else{
				printf("%i ", i);}

			i++;
			j++;
		}

	}

 return 0;
}
