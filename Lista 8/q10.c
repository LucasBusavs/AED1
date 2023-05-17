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
            //scanf("%d",&r[i][j]); // Para input
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
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

/*
Descrição: Procedimento para cálculo da média dos elementos do triangulo superior, desconsiderando a ultima linha e primeira coluna
Parametros: int m, int r[m][m]
*/
void calcula(int m, int r[m][m]){
    float media = 0;
    int count = 45;
    int aux = 1;

    for(int i=(m-2); i>=0;i--){
        for(int j=(m-1);j>=(m-aux);j--){
            media+=r[i][j];
            //count++;
        }
        aux++;
    }
    media/=count;
    printf("%.2f ", media);
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