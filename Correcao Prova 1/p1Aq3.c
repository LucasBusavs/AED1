#include <stdio.h>
#include <stdlib.h>

int main(){
    float consumo, valorP, valorM=0, maiorV, menorV;

    for(int i=1;i<=10;i++){
        printf("Entre com o valor de consumo do consumidor %d: ",i);
        scanf("%f",&consumo);
        while(consumo<0){
            printf("Valor invalido. Entre com o valor de consumo novamente: ");
            scanf("%f",&consumo);
        }
        if(consumo<30){
            valorP = 45;
        }
        else if(consumo>=30 && consumo<100){
            valorP = 1.9*consumo;
        }
        else{
            valorP = 3.95*consumo;
        }
        valorP+=14;
        printf("Valor a ser pago por %d: R$%.2f\n",i,valorP);

        valorM+=valorP;  //Media parcial

        if(i==1){       //Evitar Lixo
            menorV = valorP;
            maiorV = valorP;
        }
        else{
            if(valorP>maiorV){
                maiorV = valorP;
            }
            else if(valorP<menorV){
                menorV = valorP;
            }
        }
    }
    printf("Valor medio a ser pago: R$%.2f\n",valorM/10);
    printf("Maior valor a ser pago: R$%.2f\n",maiorV);
    printf("Menor valor a ser pago: R$%.2f\n",menorV);
    return 0;
}