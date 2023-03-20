#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int fibo[1000];

    printf("Entre com o valor do enesimo termo da sequencia de Fibonacci: ");
    scanf("%d",&n);
    while(n<1){
        printf("Entre com o valor do enesimo termo da sequencia de Fibonacci: ");
        scanf("%d",&n); 
    }

    for(int i=0;i<n;i++){
        if(i<2){
            fibo[i] = 1;
        }
        else{
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        printf("%d ", fibo[i]);
    }

    return 0;
}