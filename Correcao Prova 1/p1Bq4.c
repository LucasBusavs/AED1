#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;

    printf("Entre com o numero de linhas: ");
    scanf("%d",&n);
    while(n<1){
        printf("Numero invalido. Entre com o numero de linhas maior que 0: ");
        scanf("%d",&n);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}