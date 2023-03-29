#include <stdlib.h>
#include <stdio.h>

// Função para calcular e printar a tabuada da soma
void ad(int n){
    for(int i=1;i<=9;i++){
        printf("%d + %d = %d\n",n,i,n+i);
    }
}
// Função para calcular e printar a tabuada da subtração
void sub(int n){
    for(int i=1;i<=9;i++){
        printf("%d - %d = %d\n",i,n,i-n);
    }
}
// Função para calcular e printar a tabuada da multiplicação
void mul(int n){
    for(int i=1;i<=9;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
// Função para calcular e printar a tabuada da divisão
void divi(int n){
    for(int i=1;i<=9;i++){
        printf("%d/%d = %.2f\n",n,i,n/(float)i);
    }
}

int main(){
    int n=1;

    do{
        printf("\nPrintando tabuada da soma de %d\n\n",n);
        ad(n);
        printf("\nPrintando tabuada da subtração de %d\n\n",n);
        sub(n);
        printf("\nPrintando tabuada da multiplicação de %d\n\n",n);
        mul(n);
        printf("\nPrintando tabuada da divisão de %d\n\n",n);
        divi(n);
        n++;
    }while(n<=9);
    return 0;
}