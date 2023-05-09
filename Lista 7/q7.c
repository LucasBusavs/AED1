#include <string.h>
#include <stdio.h>
#include <ctype.h>

/*
Descrição: Função que verifica a frequencia de um caracter em uma frase
Parametros: Vetor 's' do tipo char(string), caracter 'c' do tipo char
Return: Retorna a frequencia de 'c' em 's'
*/
int ocorrencia(char s[], char c){
    int tam = strlen(s);
    int freq = 0;

    for(int i = 0; i<tam; i++){
        s[i] = tolower(s[i]);
        if(s[i] == c){
            freq++;
        }
    }

    return freq;
}

int main(){
    char s[1000];
    char c;
    int freq;

    printf("Entre com uma sentenca: ");
    scanf("%[^\n]", &s);
    fflush(stdin);
    printf("Entre com um caracter a ser conferido: ");
    scanf("%c", &c);
    fflush(stdin);
    c = tolower(c);

    freq = ocorrencia(s, c);
    printf("O %c ocorreu %d vezes na frase %s\n", c, freq, s);

    return 0;
}