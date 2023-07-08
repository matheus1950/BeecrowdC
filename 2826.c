#include <stdio.h>
#include <string.h>

int main() {

    char string[22], string1[22];

    fgets(string, 22, stdin);
    fgets(string1, 22, stdin);

    if(strcmp(string, string1) <= 0){
        printf("%s", string); printf("%s", string1);}
    else{
        printf("%s", string1); printf("%s", string);}

    return 0;
}
