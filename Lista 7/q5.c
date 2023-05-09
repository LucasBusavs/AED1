#include <string.h>
#include <stdio.h>

/*
Descrição: Procedimento que lê infinitos nomes e guarda o ultimo e o primeiro, em ordem alfabética
Parametros: -
Return: Mostra o ultimo e primeiro nome, em ordem alfabética
*/
void nomes(){
    char primeiro[100];
    char ultimo[100];
    char nome[100];
    int i=0;

    do{
        printf("Entre com um nome: ");
        scanf("%[^\n]",&nome);
        fflush(stdin);

        // Flag para encerrar leitura de nomes
        if(strcmp(nome, "stop")==0){
            break;
        }

        //Primeiro nome lido, sendo o ultimo e o primeiro da "lista" alfabética
        if(i==0){
            strcpy(primeiro, nome);
            strcpy(ultimo, nome);
            i = 1;
        }
        else{
            if(strcmp(primeiro, nome)>0){
                strcpy(primeiro, nome);
            }
            else if(strcmp(ultimo, nome)<0){
                strcpy(ultimo, nome);
            }
        }
    }while(1);
    printf("O primeiro: %s\n",primeiro);
    printf("O ultimo: %s",ultimo);
}

int main(){

    nomes();

    return 0;
}