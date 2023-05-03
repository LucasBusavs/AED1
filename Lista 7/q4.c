#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isPlaca(char *placa){
    bool verifica = true;
    int tamanho = strlen(placa);

    if(tamanho!=7){
        verifica = false;
    }

    for(int i=0; i<tamanho; i++){
        if(i>=0 && i<=2 || i == 4){
            if(isalpha(placa[i])==0){
                verifica = false;
            }
            else{
                if(isupper(placa[i])==0){
                    verifica = false;
                }
            }
        }
        else{
            if(isdigit(placa[i])==0){
                verifica = false;
            }
        }
    }

    return verifica;
}

int main(){
    char placa[7];
    bool verifica;

    do{
        printf("Entre com uma placa: ");
        scanf("%s",&placa);
        fflush(stdin);

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