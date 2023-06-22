#include <stdio.h>
#include <string.h>

int main() {

    char string1[51], string2[51];

    while(gets(string1) && gets(string2)){

        int coincide = 0;
        int maior = coincide;

        for(int i = 0; i < strlen(string1); i++){
            for(int j = 0; j < strlen(string2); j++){
                int jCOPY = j;
                int iCOPY = i;
                if(string1[i] == string2[j]){
                    while(string1[iCOPY] == string2[jCOPY] && string2[jCOPY] != '\0' && string1[iCOPY] != '\0'){
                        coincide++;
                        jCOPY++;
                        iCOPY++;
                    }
                }

                if(coincide > maior){
                    maior = coincide;
                }
                coincide = 0;
            }
        }
        int coincide2 = 0;
        int maior2 = coincide2;

        for(int i = 0; i < strlen(string2); i++){

            for(int j = 0; j < strlen(string1); j++){
                int jCOPY = j;
                int iCOPY = i;
                if(string1[j] == string2[i]){
                    while(string1[jCOPY] == string2[iCOPY] && string1[jCOPY] != '\0' && string2[iCOPY] != '\0'){
                        coincide2++;
                        jCOPY++;
                        iCOPY++;
                    }
                }

                if(coincide2 > maior2){
                    maior2 = coincide2;
                }
                coincide2 = 0;
            }
        }

        (maior > maior2)? printf("%i\n", maior) : printf("%i\n", maior2);
    }

    return 0;
}
