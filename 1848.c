#include <stdio.h>
#include <string.h>

int main()
{
    char olhoCorvo[8];
    int loteria = 0, grito;

    for(grito = 1; grito <= 3;){

        fgets(olhoCorvo, 8, stdin);

        if(strcmp(olhoCorvo, "caw caw") == 0){
            printf("%i\n", loteria);
            grito++;
            loteria = 0;
        }

        else{
            if(olhoCorvo[0] == '*')
                loteria += 4;

            if(olhoCorvo[1] == '*')
                loteria += 2;

            if(olhoCorvo[2] == '*')
                loteria += 1;
        }
    }

    return 0;
}
