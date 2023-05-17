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
            //scanf("%d",&r[i][j]); // Input do usuario
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

/*
Descrição: Procedimento para calcular e mostrar a soma dos elementos da triangular inferior
Parametros: int m, int r[m][m]
*/
void calcula(int m, int r[m][m]){
    int soma = 0;
    int aux = 1;

    for(int i=0; i<m;i++){
        for(int j=0;j<aux;j++){
            soma+=r[i][j];
        }
        aux++;
    }

    printf("%d ", soma);
}

int main(){
    int m = 10;
    int z[m][m];

    srand(time(NULL));

    preenche(m, z);
    mostra(m, z);

    calcula(m, z);

    return 0;
}