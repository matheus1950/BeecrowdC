#include <stdio.h>

int main()
{
	char l1[20], l2[20], l3[30];

	scanf("%s", l1);
	scanf("%s", l2);
	scanf("%s", l3);

	if(l1[0]=='v'){
		 if(l2[0]== 'a'){
		  if(l3[0]== 'c'){
			  printf("aguia\n");
		  }
		   else{
			   printf("pomba\n");
		   }
		}

		else if(l2[0]== 'm'){
		  if(l3[0]== 'o'){
			  printf("homem\n");
		  }
		   else{
			   printf("vaca\n");
		   }
		}
	}

	if(l1[0]== 'i'){
		 if(l2[0]== 'i'){
		  if(l3[2]== 'm'){
			  printf("pulga\n");
		  }
		   else{
			   printf("lagarta\n");
		   }
		}
		else if(l2[0]== 'a'){
		  if(l3[0]== 'h'){
			printf("sanguessuga\n");
		  }
			 else{
				 printf("minhoca\n");
			 }
		}
	}

	return 0;
}
