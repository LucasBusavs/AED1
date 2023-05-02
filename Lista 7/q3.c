#include <string.h>
#include <stdio.h>
#include <ctype.h>

void upper(char *s1, char *s2){
    int tamanho1 = strlen(s1);
    int tamanho2 = strlen(s1);
    int i;
    for(i = 0; i <= tamanho1; i++){
        s1[i] = toupper(s1[i]);
    }
    for(i = 0; i <= tamanho2; i++){
        s2[i] = toupper(s2[i]);
    }
}

int main(){
    char s1[1000], s2[1000];

    printf("Entre com a primeira frase: ");
    scanf("%[^\n]", &s1);
    fflush(stdin);
    printf("Entre com a segunda frase: ");
    scanf("%[^\n]", &s2);
    fflush(stdin);

    upper(s1, s2);

    printf("%s\n%s\n", s1, s2);

    return 0;
}