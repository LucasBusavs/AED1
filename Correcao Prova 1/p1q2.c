#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Entre com um valor inteiro positivo maior que 1: ");
    scanf("%d",&n);
    while (n<=1){       //Validação do intervalo
        printf("Invalido. Entre com um valor inteiro positivo maior que 1: ");
        scanf("%d",&n);
    }

    for(int i=2;i<=n;i++){  //Desconsidera o divisor 1, começando por i por 2
        if(n%i==0){
            printf("%d e um divisor de %d\n",i,n);
        }
    }
    return 0;
}