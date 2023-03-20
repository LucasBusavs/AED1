#include <stdio.h>
#include <stdlib.h>

int main(){
    float saldoI, saldoF;
    float valor;
    int op;
    int mov[] = {0,0,0,0};

    printf("Entre com o saldo inicial da conta: R$");
    scanf("%f", &saldoI);

    saldoF = saldoI;

    do{
        printf("Entre com a opcao de movimentacao\n");
        printf("1 - Deposito em dinheiro\n");
        printf("2 - Retirada em dinheiro\n");
        printf("3 - Recebimento em pix\n");
        printf("4 - Transferencia em pix\n");
        printf("5 - Sair\n");
        scanf("%d",&op);
        while (op<1 || op>5)
        {
            printf("Entre com uma opcao valida: ");
            scanf("%d",&op);
        }
        
        if(op==1){
            printf("Entre com o valor a ser depositado: R$");
            scanf("%f",&valor);
            while(valor<0)
            {
                printf("Entre com o valor a ser depositado: R$");
                scanf("%f",&valor); 
            }
            saldoF += valor;
            mov[0]++;
        }
        else if(op==2){
            printf("Entre com o valor a ser retirado: R$");
            scanf("%f",&valor);
            while(valor<0)
            {
                printf("Entre com o valor a ser retirado: R$");
                scanf("%f",&valor); 
            }
            saldoF -= valor;
            mov[1]++;
        }
        else if(op==3){
            printf("Entre com o valor a ser recebido em pix: R$");
            scanf("%f",&valor);
            while(valor<0)
            {
                printf("Entre com o valor a ser recebido em pix: R$");
                scanf("%f",&valor); 
            }
            saldoF += valor;
            mov[2]++;
        }
        else if(op==4){
            printf("Entre com o valor a ser transferido: R$");
            scanf("%f",&valor);
            while(valor<0)
            {
                printf("Entre com o valor a ser transferido: R$");
                scanf("%f",&valor); 
            }
            saldoF -= valor;
            mov[3]++; 
        }
    }while(op!=5);
    printf("Saldo final: R$%.2f\n", saldoF);
    if(saldoF==0){
        printf("CONTA ZERADA\n");    
    }
    else if(saldoF<0){
        printf("CONTA ESTOURADA\n");  
    }
    else{
        printf("CONTA PREFERENCIAL\n"); 
    }
    printf("Quantidade de depositos: %d\n",mov[0]);
    printf("Quantidade de retiradas: %d\n",mov[1]);
    printf("Quantidade de pix recebidos: %d\n",mov[2]);
    printf("Quantidade de pix enviados: %d\n",mov[3]);

    return 0;
}