#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/*
Descrição: Função que recebe uma placa e verifica se está no padrão correto
Parametros: Vetor 'placa' do tipo char
Return: Retorna um bool, true se estiver no padrão correto, false se estiver fora do padrão
*/
bool isPlaca(char placa[]){
    int tamanho = strlen(placa);

    if(tamanho!=7){
        return false;
    }

    for(int i=0; i<tamanho; i++){
        //Verifica as posições que deveriam ser alfabéticas e em UPPERCASE
        if(i>=0 && i<=2 || i == 4){
            if(!(isalpha(placa[i]))){
                return false;
            }
            else{
                if(!(isupper(placa[i]))){
                    return false;
                }
            }
        }
        // Verifica as posições que deveriam ser numeros
        else{
            if(!(isdigit(placa[i]))){
                return false;
            }
        }
    }

    return true;
}

int main(){
    char placa[7];
    bool verifica;

    do{
        printf("Entre com uma placa: ");
        scanf("%s",&placa);
        fflush(stdin);

        // Saida do loop
        if(strcmp(placa, "fechar") == 0){
            break;
        }

        verifica = isPlaca(placa);

        if(verifica){
            printf("Correto");
        }
        else{
            printf("Incorreto");
        }
        printf("\n");
    }while(true);

    return 0;
}