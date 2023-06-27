#include <stdio.h>

int main() {

  int N, queda = 0;

  scanf ("%i", &N);
  int RPM[N];

  for (int i = 0; i < N; i++){
      scanf ("%i", &RPM[i]);

        if (i != 0){
    	    if (RPM[i] < RPM[i - 1]){
    	        queda = i + 1;
    	        break;
    	    }
        }
    }

  printf ("%i\n", queda);

  return 0;
}
