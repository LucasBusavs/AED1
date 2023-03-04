#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void jurosSimples(float valorI, float taxa, int tempo, float* resSimples){
    float juros, mFinal;

    juros = valorI*taxa*tempo;
    mFinal = valorI+juros;
    resSimples[0] = juros;
    resSimples[1] = mFinal;
}

void jurosComposto(float valorI, float taxa, int tempo, float* resComposto){
    float juros, mFinal;

    mFinal = valorI*pow((1+taxa),tempo);
    juros = mFinal - valorI;
    resComposto[0] = juros;
    resComposto[1] = mFinal;
}

int main(){
    float valorI, taxa;
    int tempo;
    float resSimples[2], resComposto[2];

    printf("Entre com o valor a ser investido: ");
    scanf("%f", &valorI);
    while (tempo < 0)
    {
        printf("Entre com o valor a ser investido valido: ");
        scanf("%f", &valorI);

    }

    printf("Entre com o valor da taxa de investimento:");
    scanf("%f", &taxa);
    while (taxa < 0 || taxa >= 1) 
    {
        printf("Entre com o valor da taxa de investimento valido: ");
        scanf("%f", &taxa);

    }

    printf("Entre com o tempo em meses de aplicacao: ");
    scanf("%d", &tempo);
    while (tempo < 1)
    {
        printf("Entre com o tempo em meses de aplicacao valido: ");
        scanf("%d", &tempo);

    }

    jurosSimples(valorI, taxa, tempo, resSimples);
    printf("\n\t\tJUROS SIMPLES\n");
    printf("Juros: %.2f\n", resSimples[0]);
    printf("Montante final: %.2f\n", resSimples[1]);

    jurosComposto(valorI, taxa, tempo, resComposto);
    printf("\n\t\tJUROS COMPOSTO\n");
    printf("Juros: %.2f", resComposto[0]);
    printf("\nMontante Final: %.2f", resComposto[1]);

    return 0;
}