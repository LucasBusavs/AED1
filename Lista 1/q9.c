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
    printf("Entre com o valor da taxa de investimento:");
    scanf("%f", &taxa);
    printf("Entre com o tempo em meses de aplicacao: ");
    scanf("%d", &tempo);
    while (tempo < 1)
    {
        printf("Entre com o tempo em meses de aplicacao valido: ");
        scanf("%d", &tempo);

    }

    jurosSimples(valorI, taxa, tempo, resSimples);
    printf("%.2f", resSimples[0]);
    printf("\n%.2f", resSimples[1]);

    jurosComposto(valorI, taxa, tempo, resComposto);
    printf("%.2f", resComposto[0]);
    printf("\n%.2f", resComposto[1]);

    return 0;
}