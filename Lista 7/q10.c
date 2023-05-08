#include <string.h>
#include <stdio.h>

char *eliminaEspacos(char s[]){
    int tam = strlen(s);
    int flag = 0;
    int v[tam];
    int j = 0, i = 0;
    int pula = 0;

    for(i = 0; i <tam; i++){
        if(s[i] == ' '){
            flag++;
        }
        else{
            flag = 0;
        }

        if(flag > 1){
            v[j++] = i;
        }
    }

    for(i = 0; i < j; i++){
        for(int k = 0; k < tam; k++){
            if(k == v[i]){
                pula++;
            }
            s[k] = s[k + pula - i];
        }
    }

    return s;
}

int main(){
    char s[] = "Lucas  de  Souza  Bueno";
    char *result;

    printf("Entre com uma frase: ");
    scanf("%[^\n]", &s);

    result = eliminaEspacos(s);

    return 0;
}