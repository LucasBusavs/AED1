#include <stdio.h>
#include <stdlib.h>

void jurosSimples(float valorI, float taxa, int tempo, float* resSimples){
    float juros, mFinal;

    juros = valorI*taxa*tempo;
    mFinal = valorI+juros;
    resSimples[0] = juros;
    resSimples[1] = mFinal;
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

    return 0;
}