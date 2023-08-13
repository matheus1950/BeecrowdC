#include <stdio.h>
#include <string.h>

int main() {

    char binario[102], cont = 0;

    scanf("%s", binario);

    for(int i = 0; binario[i] != '\0'; i++){
        if(binario[i] == '1')
            cont++;
    }

    if(cont % 2 == 0)
        strcat(binario, "0");
    else
        strcat(binario, "1");

    puts(binario);

    return 0;
}
