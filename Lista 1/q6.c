#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, peso, imc;

    printf("Entre com o valor da altura em metros: ");
    scanf("%f", &altura);
    while (altura < 0 || altura > 2.5)
    {
        printf("Entre com o valor valido de altura: ");
        scanf("%f", &altura);
    }
    printf("Entre com o valor da peso em kg: ");
    scanf("%f", &peso);
    while (peso < 0 || peso > 200)
    {
        printf("Entre com o valor valido de peso: ");
        scanf("%f", &peso);
    }
    imc = peso / (altura*altura);
    printf("IMC = %.2f", imc);
    return 0;
}