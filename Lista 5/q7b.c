#include <stdio.h>

void x(){
    int inf, sup, incre;

    printf("Entre com o limite inferior: ");
    scanf("%d",&inf);
    
    printf("Entre com o limite superior: ");
    scanf("%d",&sup);
    while(sup<inf){
        printf("Superior menor que inferior, entre novamente: ");
        scanf("%d",&sup);
    }

    printf("Entre com um valor de incrementacao: ");
    scanf("%d",&incre);
    while(incre<1){
        printf("Invalido. Entre com um valor de incrementacao: ");
        scanf("%d",&incre);    
    }

    for(int i=inf;i<=sup;i=i+incre){
        printf("%d ",i);
    }    

}

int main(){
    x();
    return 0;
}