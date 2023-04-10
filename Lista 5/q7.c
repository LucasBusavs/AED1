#include <stdio.h>

int qntDig(int n){
    int qnt=1, aux=n;

    if(n/10 == 0){
        return 1;
    }

    do{
        if((aux/=10) == 0){
            break;
        }
        qnt++;
    }while(1);

    return qnt;
}

int kDigit(int n, int k){
    int kesimo=n;

    for(int i=1;i<=k;i++){
        kesimo = n%10;
        n/=10;
    }
    return kesimo;
}

int main(){
    int k, n;
    int qnt, kDig;

    printf("Entre com um numero maior que 0: ");
    scanf("%d",&n);
    while(n<=0){
        printf("Invalido. Entre com um numero maior que 0: ");
        scanf("%d",&n);      
    }

    qnt = qntDig(n);
    printf("%d possue %d digitos\n",n,qnt);

    printf("Entre com o valor da posicao a ser descoberta: ");
    scanf("%d",&k);
    while(k>qnt || k<1){
        printf("Invalido. Entre com o valor da posicao a ser descoberta: ");
        scanf("%d",&k);
    }

    kDig = kDigit(n,k);
    printf("O %d° termo de %d e o %d",k,n,kDig);

    return 0;
}