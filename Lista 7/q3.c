#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char s1[1000], s2[1000];

    printf("Entre com a primeira frase: ");
    scanf("%[^\n]", &s1);
    fflush(stdin);
    printf("Entre com a segunda frase: ");
    scanf("%[^\n]", &s2);
    fflush(stdin);

    printf("%s\n%s", s1,s2);

    return 0;
}