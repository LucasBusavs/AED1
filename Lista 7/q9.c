#include <string.h>
#include <stdio.h>

void concat(char s1[], char s2[], char s3[]){
    char result[300] = "";

    strcat(result, s1);
    strcat(result, s2);
    strcat(result, s3);

    printf("%s", result);
}

int main(){
    char s1[100], s2[100], s3[100];
    
    printf("Entre com a string 1: ");
    scanf("%[^\n]",&s1);
    fflush(stdin);
    printf("Entre com a string 2: ");
    scanf("%[^\n]",&s2);
    fflush(stdin);
    printf("Entre com a string 3: ");
    scanf("%[^\n]",&s3);
    fflush(stdin);

    concat(s1, s2, s3);

    return 0;
}
