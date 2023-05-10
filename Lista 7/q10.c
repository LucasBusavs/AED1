#include <string.h>
#include <stdio.h>

/*
Descrição: Procedimento que elimina espaços indesejados em uma frase
Parametros: Vetor 's' do tipo char(string)
Return: "Retorna" por referencia a frase sem os espaços indesejados
*/
void eliminaEspacos(char s[]){
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
            if(k + i == v[i]){
                pula++;
            }
            s[k] = s[k + pula - i];
        }
    }
}

int main(){
    char s[100];

    printf("Entre com uma frase: ");
    scanf("%[^\n]", &s);

    eliminaEspacos(s);
    printf("%s", s);

    return 0;
}