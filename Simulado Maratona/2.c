#include <stdio.h>

long int quantidade(int n, int k, int x[]){
    long int qnt = 0;
    int soma = 0;
    for(int i = 0; i<n; i++){
        soma = 0;
        for(int j = i; j<n; j++){
            soma += x[j];
            if(soma == k){
                qnt++;
                break;
            }
            else if(soma > k){
                break;
            }
        }
    }
    return qnt;
}

int main(){
    int n, k;
    long int saida = 0;
    do{
       scanf("%d %d", &n, &k);
    }while(n<1 || n>500000 || k<0 || k>1000000);
    int x[n];
    for(int i=0; i<n; i++){
        do{
            scanf("%d", &x[i]);
        }while(x[i]<0 || x[i]>100);
    }
    saida = quantidade(n, k, x);
    printf("%ld", saida);
    return 0;
}