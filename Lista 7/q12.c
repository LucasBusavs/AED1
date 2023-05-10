#include <string.h>
#include <stdio.h>
#include <ctype.h>

/*
Descrição: Procedimento que contabiliza quanto cada vogal aparece em uma string
Parametros: Vetor 's' do tipo char(string), Vetor 'v' do tipo int
Return: "Retorna" por referencia o vetor preenchido 'v'
*/
void vogais(char s[], int v[]){
    int tam = strlen(s);
    for(int i=0; i<tam; i++){
        s[i] = tolower(s[i]);
        if(s[i] == 'a'){
            v[0]++;
        }
        else if(s[i] == 'e'){
            v[1]++;
        }
        else if(s[i] == 'i'){
            v[2]++;
        }
        else if(s[i] == 'o'){
            v[3]++;
        }
        else if(s[i] == 'u'){
            v[4]++;
        }
    }
}

int main(){
    char s[100];
    int v[] = {0,0,0,0,0};

    printf("Entre com uma string: ");
    scanf("%[^\n]", &s);

    vogais(s, v);

    for(int i=0;i<5;i++){
        printf("%d ", v[i]);
    }

    return 0;
}