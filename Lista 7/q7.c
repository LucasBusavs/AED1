#include <string.h>
#include <stdio.h>
#include <ctype.h>

int ocorrencia(char s[], char c){
    int tam = strlen(s);
    int qnt = 0;

    for(int i = 0; i < tam; i++){
        s[i] = tolower(s[i]);
        if(s[i] == c){
            qnt++;
        }
    }

    return qnt;
}

int main(){
    char s[1000];
    char c;
    int qnt;

    printf("Entre com uma sentenca: ");
    scanf("%[^\n]", &s);
    fflush(stdin);
    printf("Entre com um caracter a ser conferido: ");
    scanf("%c", &c);
    fflush(stdin);
    c = tolower(c);

    qnt = ocorrencia(s, c);
    printf("%d\n", qnt);

    return 0;
}