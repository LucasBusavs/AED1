#include <string.h>
#include <stdio.h>

void nomes(){
    char primeiro[100];
    char ultimo[100];
    char nome[100];
    int i=0;

    do{
        printf("Entre com um nome: ");
        scanf("%[^\n]",&nome);
        fflush(stdin);

        if(strcmp(nome, "stop")==0){
            break;
        }

        if(i==0){
            strcpy(primeiro, nome);
            strcpy(ultimo, nome);
            i++;
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