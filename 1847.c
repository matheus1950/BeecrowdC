#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if(a > b){
        if(b > c && (b - c) >= (a - b))
            printf(":(\n");
        else
            printf(":)\n");
    }
    else if(a < b){
        if(b < c && (c - b) >= (b - a))
            printf(":)\n");
        else
            printf(":(\n");
    }
    else{
        if(b < c)
            printf(":)\n");
        else
            printf(":(\n");
    }

    return 0;
}
