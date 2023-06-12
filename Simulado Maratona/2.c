#include <stdio.h>


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
    
    return 0;
}