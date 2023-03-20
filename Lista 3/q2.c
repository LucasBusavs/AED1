#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    float soma;
    int i = 1;

    printf("Entre com o valor de n para o calculo da serie:" );
    scanf("%d",&n);
    while (n<=0)
    {
        printf("Entre com o valor de n novamente:" );
        scanf("%d",&n);
    }

    while(i<=n){
        if(i==1){
            soma = i/(float) i;
        }
        else{
            soma += (i+i-1)/(float) (i);
        }
        i++;
    }

    printf("O resultado da serie: %.2f\n", soma);
    printf("Enesimo termo: %d\n", n);

    return 0;
}