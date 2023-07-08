#include <stdio.h>

int main() {

    char string[31];
    int i = 1;

    while(scanf("%s", string) != EOF){
        if(i == 3)
            printf("%s\n", string);
        else if(i == 7)
            printf("%s\n", string);
        else if(i == 9)
            printf("%s\n", string);
        else if(i == 10)
            i = 0;

        i++;
    }

    return 0;
}
