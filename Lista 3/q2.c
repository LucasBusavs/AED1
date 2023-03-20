#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    float soma;

    printf("Entre com o valor de n para o calculo da serie:" );
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i==1){
            soma = i/(float) i;
        }
        else{
            soma += (i+i-1)/(float) (i);
        }
    }

    printf("O resultado da serie: %.2f\n", soma);
    printf("Enesimo termo: %d\n", n);

    return 0;
}