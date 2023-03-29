#include <stdio.h>

int main(){
    int n, ultA, primA;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &n);
    while(n<=0){
        printf("Entre com um numero inteiro positivo valido: ");
        scanf("%d", &n);
    }
    if((n/10)==0){     //Caso de um unico algarismo
        printf("%d + %d = %d",n,n,n+n);
    }
    else{
        ultA = n%10;    //Calculo do ultimo algarismo
        primA = n;
        do{
            primA = primA/10;
        }while(primA>9);    //Definição do primeiro algarismo, sendo que tem que estar em um intervalo entre 1 e 9
        printf("%d + %d = %d",ultA,primA,primA+ultA);
    }
    return 0;
}