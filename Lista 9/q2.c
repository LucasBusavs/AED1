#include <stdio.h>
#include <stdlib.h>

void grava(){
    int n = 1;
    FILE *f = fopen("numeros.txt", "a");
    while(1){
        printf("Entre com 0 para sair\n");
        printf("Entre com um numero: ");
        scanf("%d", &n);
        fflush(stdin);
        if(!n){
            break;
        }
        fprintf(f, "%d\n", n);
    }
    fclose(f);
    printf("Gravacao concluida\n");
}

void soma(){
    int soma = 0;
    int aux;
    FILE *f = fopen("numeros.txt", "r");
    if(!f){
        printf("Error\n");
        exit(1);
    }
    while(fscanf(f, "%d\n", &aux) != EOF){
        soma += aux;
    }
    fclose(f);
    printf("Soma: %d\n", soma);
}

int main(){
    int op;
    int flag = 0;

    printf("\t\t*****ARQUIVOS*****\n");
    do{
        printf("\nEscolha uma opcao: \n");
        printf("1 - Gravar numeros\n");
        printf("2 - Soma\n");
        printf("3 - Mostra HTML\n");
        printf("4 - Backup HTLM\n");
        printf("0 - Sair\n");
        scanf("%d", &op);
        fflush(stdin);
        while(op < 0 || op > 4){
            printf("Opcao invalida. Entre novamente: ");
            scanf("%d", &op);
            fflush(stdin);
        }
        if(op == 1){
            grava();
            flag = 1;
        }
        else if(op == 2){
            soma();
        }
        else if(op == 3){

        }
        else if(op == 4){

        }
        printf("\n");
    }while(op != 0);

    return 0;
}