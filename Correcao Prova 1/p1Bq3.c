#include <stdio.h>
#include <stdlib.h>

int main(){
    char cod;
    float compra, compraV=0, compraP=0, compraT=0;

    for(int i=1;i<=15;i++){
        printf("Insira o codigo da transicao %d: ",i);
        scanf(" %c",&cod);
        fflush(stdin);
        while(cod!='V' && cod!='P'){    //Intervalo valido
            printf("Codigo invalido. Insira novamente: ");
            scanf("%c",&cod);
            fflush(stdin);

        }
        
        printf("Entre com o valor da compra: ");
        scanf("%f",&compra);
        fflush(stdin);
        while(compra<=0){   //Exlcui valorer menores ou igual a 0
            printf("Valor de compra invalido. Entre novamente: ");
            scanf("%f",&compra);
            fflush(stdin);
        }

        compraT+=compra;

        if(cod=='V'){
            compraV+=compra;
        }
        else{
            compraP+=compra;
        }
    }
    printf("Valor pago a vista: R$%.2f\n",compraV);
    printf("Valor pago a prazo: R$%.2f\n",compraP);
    printf("Valor pago total: R$%.2f\n",compraT);
    return 0;
}