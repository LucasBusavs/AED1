#include <stdio.h>

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
    FILE *f = fopen("numeros.txt", "r");
    if(!f){
        
    }
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
        if (op == 2 && !flag){
            printf("Grave ao menos um numero primeiro, 0 caso seja um arquivo existente\n");
        }
        else if(op == 1){
            grava();
        }
        else if(op == 2){

        }
        else if(op == 3){

        }
        else if(op == 4){

        }
        printf("\n");
    }while(op != 0);

    return 0;
}