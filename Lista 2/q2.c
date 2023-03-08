#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SENHA "1234"

int seqNumerica(char string[]){
    int tamanho = strlen(string);

    for(int i = 0; i<tamanho ; i++){
        if(isdigit(string[i]) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    char senha[5];
    int isNumerico;

    printf("Entre com uma senha de 4 algarismos: ");
    scanf("%s", &senha);
    
    isNumerico = seqNumerica(senha);

    while (strlen(senha)!=4 || isNumerico==0){
        printf("A senha precisa ter 4 algarismos, entre novamente: ");
        scanf("%s", &senha);
        isNumerico = seqNumerica(senha);
    }

    if(strcmp(senha,SENHA)==0){
        printf("A senha esta correta");
    }
    else{
        printf("A senha esta incorreta");
    }

    return 0;
}