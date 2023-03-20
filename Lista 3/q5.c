#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    int pos=0, neg=0, zeros=0;
    int i = 0;
    
    printf("Entre com um numero: ");
    scanf("%d",&n);
    while(n!=-9999){
        i++;
        if(n==0){
            zeros++;
        }
        else if(n>0){
            pos++;
        }
        else{
            neg++;
        }
    printf("Entre com um numero: ");
    scanf("%d",&n);
    }

    printf("Foram %.2f%% numeros positivos\n",pos/(float)i*100);    
    printf("Foram %.2f%% numeros negativos\n",neg/(float)i*100);    
    printf("Foram %.2f%% numeros zeros\n",zeros/(float)i*100);    

    return 0;
}