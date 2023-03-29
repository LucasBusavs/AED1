#include <stdio.h>

int main(){
    int k,prox=1,ant=0,fibo;
    printf("Entre com o numero do termo a ser descoberto: ");
    scanf("%d",&k);
    while(k<=0){
        printf("Entre com um termo valido: ");
        scanf("%d",&k);
    }
    if(k==1){
        printf("0");
    }
    else if(k==2){
        printf("1");
    }
    else{
        //k-2, indica que duas posições ja foram feitas anteriormente.
        for(int i=0;i<k-2;i++){
            fibo = prox+ant;
            ant = prox;
            prox = fibo;
        }
        printf("Termo = %d",fibo);
    }
    return 0;
}