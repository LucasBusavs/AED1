#include <string.h>
#include <stdio.h>
#include <ctype.h>

int vogalDigit(char s[], int *qntVogal){
    int tam = strlen(s);
    int digit = 0;

    for(int i = 0; i < tam; i++){
        if(isdigit(s[i])){
            digit++;
        }
        else if(isalpha(s[i])){
            s[i] = tolower(s[i]);   //No sensitive case
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                (*qntVogal)++;
            }
        }
    }

    return digit;
}

int main(){
    int qntVog = 0;
    int qntDigit;
    char s[100];

    printf("Entre com uma string: ");
    scanf("%s", &s);

    qntDigit = vogalDigit(s, &qntVog);

    printf("Quantidade de digitos: %d\n", qntDigit);
    printf("Quantidade de vogais: %d\n", qntVog);

    return 0;
}