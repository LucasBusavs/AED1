#include <stdio.h>
#include <string.h>
#include <ctype.h>

int alphaNum(char *s){
    int qnt = 0;
    int size = strlen(s);
    for(int i=0; i<=size; i++){
        if(isalnum(s[i]) != 0){
            qnt++;
        }
    }
    return qnt;
}

int main(){
    char s[1000];
    int qnt;

    printf("Entre com uma string: ");
    scanf("%[^\n]",&s);
    fflush(stdin);

    qnt = alphaNum(s);

    printf("%d",qnt);

    return 0;
}