#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    int pos=0, neg=0, zeros=0;

    do{
        printf("Entre com um numero: ");
        scanf("%d",&n);

        if(n==0){
            zeros++;
        }
        else if(n>0){
            pos++;
        }
        else{
            neg++;
        }

    }while (n!=-9999); //-9999 conta?

    printf("Foram %d numeros positivos\n",pos);    
    printf("Foram %d numeros negativos\n",neg);    
    printf("Foram %d numeros iguais a 0\n",zeros); 

    return 0;
}