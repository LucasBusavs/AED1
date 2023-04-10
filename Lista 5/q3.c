#include <stdio.h>

int isPrimo(int n){
    if(n==2 || n==3 || n==5){
        return 1;
    }
    else if(n%2==0){
        return 0;
    }
    for(int i=3;i<=n/2;i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void primoSeq(int n){
    int primoIs;

    printf("1 ");
    for(int i=2;i<=n;i++){
        primoIs = isPrimo(i);
        if(primoIs == 1){
            printf("%d ", i);
        }
    }
}

int main(){
    int n;
    
    printf("Entre com um inteiro maior que 1: ");
    scanf("%d",&n);
    while(n<=1){
        printf("Invalido. Entre com um inteiro maior que 1: ");
        scanf("%d",&n);
    }
    primoSeq(n);
    
    return 0;
}