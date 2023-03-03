#include <stdio.h>
#include <stdlib.h>

int main(){
    float c, f;

    printf("Entre com a temperatura em Farenheit: ");
    scanf("%f", &f);
    c = (5.0/9.0)*(f-32);
    printf("Temperatura convertida em celsius: %.1f",c);
    return 0;
}