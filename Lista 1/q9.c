#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Função para cálculo de juros simples, armazenando a resposta em resSimples declarado na main, retornando 2 valores
void jurosSimples(float valorI, float taxa, int tempo, float* resSimples){
    float juros, mFinal;

    juros = valorI*taxa*tempo;
    mFinal = valorI+juros;
    resSimples[0] = juros;
    resSimples[1] = mFinal;
}
//Função para cálculo de juros compostos, armazenando a resposta em resComposto declarado na main, retornando 2 valores
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

    printf("Calculadora de juros\n\n");

    printf("Informe o valor inicial investido: R$ ");
    scanf("%f", &valorI);
    while (valorI <= 0)
    {
        printf("Valor invalido. Informe o valor inicial investido novamente: R$ ");
        scanf("%f", &valorI);
    }

    printf("Informe a taxa de juros: ");
    scanf("%f", &taxa);
    while (taxa < 0 || taxa >= 1) 
    {
        printf("Taxa de juros invalida. Informe a taxa de juros novamente: ");
        scanf("%f", &taxa);
    }

    printf("Informe o tempo de aplicacao (em meses): ");
    scanf("%d", &tempo);
    while (tempo <= 0)
    {
        printf("Tempo de aplicacao invalido. Informe o tempo de aplicacao novamente (em meses): ");
        scanf("%d", &tempo);
    }

    jurosSimples(valorI, taxa, tempo, resSimples);
    printf("\nJuros simples\n");
    printf("Valor inicial investido: R$ %.2f\n", valorI);
    printf("Taxa de juros: %.2f%% ao mes\n", taxa*100);
    printf("Tempo de aplicacao: %d meses\n", tempo);
    printf("Juros: R$ %.2f\n", resSimples[0]);
    printf("Montante final: R$ %.2f\n", resSimples[1]);

    jurosComposto(valorI, taxa, tempo, resComposto);
    printf("\nJuros compostos\n");
    printf("Valor inicial investido: R$ %.2f\n", valorI);
    printf("Taxa de juros: %.2f%% ao mes\n", taxa*100);
    printf("Tempo de aplicacao: %d meses\n", tempo);
    printf("Juros: R$ %.2f\n", resComposto[0]);
    printf("Montante final: R$ %.2f\n", resComposto[1]);

    return 0;
}