#include <stdio.h>
#include <stdlib.h>

int main(){
    float a = 5000000, b = 7000000;
    int ano = 0;

    while(a<b){
        a *= 1.03;
        b *= 1.02;
        ano++;
    }

    printf("Demora %d anos\n",ano);

    return 0;
}