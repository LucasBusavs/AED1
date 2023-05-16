#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Descrição: Procedimento para inicialização de elementos inteiros de uma matriz m x m
Parametros: int m, int r[m][m]
Retorno: "Retorna" por referencia a matriz r preenchida
*/
void preenche(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            r[i][j] = rand() % 2;   // 0 - 1
            //scanf("%d",&r[i][j]); // Opção para entrada via usuario
        }
    }
}

/*
Descrição: Procedimento para printar uma matriz m x m
Parametros: int m, int r[m][m]
*/
void mostra(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}

/*
Descrição: Função para verificar se uma matriz é de permutação
Parametros: int m, int r[m][m]
Retorno: Retorna false se não for de permutação, e true se for de permutação
*/
bool permutacao(int m, int r[m][m]){
    int flag = 0;
    //Verifica linha
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            if(r[i][j] && flag){    //Não permite ter mais que 1 termo igual a 1 na linha
                return false;
            }
            else if(r[i][j]){
                flag = 1;
            }
        }
        if(!flag){
            return false;
        }
        flag = 0;
    }
    //Verifica coluna
    for(int j=0; j<m;j++){
        for(int i=0;i<m;i++){
            if(r[i][j] && flag){    //Não permite ter mais que 1 termo igual a 1 na coluna
                return false;
            }
            else if(r[i][j]){
                flag = 1;
            }
        }
        if(!flag){
            return false;
        }
        flag = 0;
    }

    return true;
}

int main(){
    int m;
    bool result;
    srand(time(NULL));

    printf("Entre com a ordem da matriz quadrada: ");
    scanf("%d",&m);

    int a[m][m];

    preenche(m, a);
    mostra(m, a);
    printf("\n");

    result = permutacao(m, a);

    if(result){
        printf("OK");
    }

    return 0;
}