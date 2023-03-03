#include <stdio.h>
#include <stdlib.h>

int main(){
    int h;
    float sMin, sLiquido, sBruto;
    float valorH, imposto;

    printf("Entre com a quantidade de horas trabalhadas: ");
    scanf("%d", &h);
    printf("Entre com o valor do salario minimo: ");
    scanf("%f", &sMin);
    valorH = sMin*0.1;
    sBruto = valorH*h;
    imposto = 0.05*sBruto;
    sLiquido = sBruto - imposto;
    printf("Salario Liquido: %.2f\n", sLiquido);
    return 0;
}