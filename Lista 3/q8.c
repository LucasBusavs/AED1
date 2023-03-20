#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int par=0, impar=0;

    printf("Entre com um numero inteiro maior que 0: ");
    scanf("%d",&n);
    while(n<1){
        printf("Entre com um numero inteiro maior que 0: ");
        scanf("%d",&n);
    }
    while(n<=1000){
        if(n%2==0){
            par += n;
        }
        else{
            impar += n;
        }
        printf("Entre com outro numero inteiro maior que 0: ");
        scanf("%d",&n);
        while(n<1){
            printf("Entre com outro numero inteiro maior que 0: ");
            scanf("%d",&n);
        }
    }
    printf("%d %d",par,impar);

    return 0;
}