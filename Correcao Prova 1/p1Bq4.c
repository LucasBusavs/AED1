#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;

    printf("Entre com o numero de linhas: ");
    scanf("%d",&n);
    while(n<1){     //Validar o intervalo
        printf("Numero invalido. Entre com o numero de linhas maior que 0: ");
        scanf("%d",&n);
    }

    for(int i=0;i<n;i++){       //Linahs
        for(int j=0;j<=i;j++){  //Colunas, j<=i define numero de colunas igual ao numero de linhas
            printf("*");
        }
        printf("\n");
    }

    return 0;
}