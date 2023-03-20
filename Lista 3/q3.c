#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,m;

    printf("Entre com um valor maior que 1: ");
    scanf("%d",&n);
    while (n<=1)
    {
        printf("Entre com um valor maior que 1: ");
        scanf("%d",&n);
    }
    
    printf("Entre com um valor maior que 0: ");
    scanf("%d",&m);
    while (m<=0)
    {
        printf("Entre com um valor maior que 0: ");
        scanf("%d",&m);
    }

    for(int i=1;i<=m;i++){
        if(i%2 == 1){
            for(int j=0;j<=n;j++){
                printf("%d ", j);
            }
        }
        else{
            for(int j=n;j>=0;j--){
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}