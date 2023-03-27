#include <stdlib.h>
#include <stdio.h>

int main(){
    float compra,venda, compraT=0, vendaT=0;
    float lucro, lucroT;
    int i=1;
    int l1=0,l2=0,l3=0;

    do{
        printf("Entre com o valor de compra do item %d: ",i);
        scanf("%f",&compra);
        while(compra<0){
            printf("Valor invalido. Entre com o valor valido de compra do item %d: ",i);
            scanf("%f",&compra); 
        }

        if(compra==0){
            break;
        }

        printf("Entre com o valor de venda do item %d: ",i);
        scanf("%f",&venda);
        while(venda<0 || compra>venda){
            printf("Valor invalido. Entre com o valor valido de venda do item %d: ",i);
            scanf("%f",&venda); 
        }
        
        compraT += compra;
        vendaT += venda;

        lucro = (venda-compra)/compra;

        if(lucro<0.1f){
            l1++;
        }
        else if(lucro>=0.1f && lucro<=0.2f){
            l2++;
        }
        else if(lucro>0.2f){
            l3++;
        }

        i++;
    }while(1);

    lucroT = (vendaT-compraT)/compraT;

    printf("Foram %d mercadorias com lucro de ate 10%%\n",l1);
    printf("Foram %d mercadorias com lucro de 10%% a 20%%\n",l2);
    printf("Foram %d mercadorias com lucro maior que 20%%\n",l3);
    printf("Compra Total: R$%.2f\n",compraT);
    printf("Venda Total: R$%.2f\n",vendaT);
    printf("Lucro Total: %.1f%%\n",lucroT*100);

    return 0;
}