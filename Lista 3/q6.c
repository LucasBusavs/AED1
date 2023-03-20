#include <stdlib.h>
#include <stdio.h>

int main(){
    float n, prod = 1;

    do{
        printf("Entre com um numero, 0 para sair: ");
        scanf("%f",&n);
        if(n!=0){
            prod *= n;
        }
    }while(n!=0);
    printf("%f",prod);
    return 0;
}