#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Descrição: Procedimento para inicialização de elementos inteiros de uma matriz m x m
Parametros: int m, int r[m][m]
Retorno: "Retorna" por referencia a matriz r preenchida
*/
void preenche(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            r[i][j] = rand() % 10;  // 0 - 9
            //scanf("%d",&r[i][j]); // Input
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
    printf("\n");
}


void alteracao(int m, int r[m][m]){
    int aux[m];
    
    for(int i=0; i<m;i++){
        for(int j=0; j<m;j++){
            //Troca linha 2 com a linha 8
            if(i == 1){
                aux[j] = r[i][j];
                r[i][j] = r[7][j];
                r[7][j] = aux[j];
            }
            //Troca linha 4 com coluna 10
            else if(i == 3){
                aux[j] = r[i][j];
                r[i][j] = r[j][9];
                r[j][9] = aux[j];
            }
            //Troca linha 5 com coluna 10
            else if(i == 4){
                aux[j] = r[i][j];
                r[i][j] = r[j][9];
                r[j][9] = aux[j];
            }
        }
    }
    //Troca das diagonais
    for(int i=0; i<m;i++){
        for(int j=0; j<m;j++){
            if(i == j){
                aux[j] = r[i][j];
                r[i][j] = r[i][m-1-j];
                r[i][m-1-j] = aux[j];
            }
        }
    }

    mostra(m, r);
}

int main(){
    int m = 10;
    int z[m][m];

    srand(time(NULL));

    preenche(m, z);
    mostra(m, z);

    alteracao(m, z);

    return 0;
}