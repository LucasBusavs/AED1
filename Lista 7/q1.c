#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Descrição: Função contabiliza quantidade de alfanuméricos em uma string
Parametros: vetor do tipo char(string)
Return: Retorna variavel inteira com a quantidade de alfanuméricos
*/
int alphaNum(char s[]){
    int qnt = 0;
    int size = strlen(s);
    for(int i=0; i<size; i++){
        if(isalnum(s[i])){  //isalnum() retorna 0 se falso, >0 se verdadeiro
            qnt++;
        }
    }
    return qnt;
}

int main(){
    char s[1000];
    int qnt;

    printf("Entre com uma string: ");
    scanf("%[^\n]",&s);     // Formato %[^\n] considera espaços
    fflush(stdin);

    qnt = alphaNum(s);

    printf("Quantidade de alfanumericos: %d\n",qnt);

    return 0;
}