#include <stdio.h>
/*
Descrição: Verifica se n é primo, se caso negativo, define qual o maior e o menor divisor de n
Parametros: Int n, int *max, int *min.
Retorno: int primo.
*/
int isPrimo(int n, int *max, int *min){
    int flag1=0, flag2=0;
    if(n % 2 ==0){
        *min = 2;
        for(int i=2;i<n;i++){
            if(n%i==0){
                *max = i;
            }
        }
        return 0;
    }else{
        for(int i=3;i<=n/2;i=i+2){
            if(flag1==0 && n%i==0){
                *min = i;
                flag1++;
            }
            if(n%i==0){
                *max = i;
                flag2++;
            }
        }
        if(flag2>0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main(){
    int n, min = 1, max, primo;
    scanf("%d",&n);
    max = n;
    primo = isPrimo(n, &max, &min);
    printf("%d %d %d",max, min, primo);
    return 0;
}