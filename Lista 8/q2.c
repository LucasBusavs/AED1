#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Descrição: Procedimento para calculo da soma da diagonal, e inicializar um vetor com os elementos da diagonal
Parametros: int m, int a[m][m], int s[m]
Retorno: "Retorna" por referencia o vetor preenchido
*/
void diagonal(int m, int a[m][m], int s[m]){
    int i, j;
    int soma = 0;

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i == j){ //Condição para diagonal principal
                soma += a[i][j];
                s[i] = a[i][j];
            }
        }
    }
    printf("Soma da diagonal: %d\n", soma);
}

/*
Descrição: Procedimento para inicialização de elementos inteiros de uma matriz m x m
Parametros: int m, int a[m][m]
Retorno: "Retorna" por referencia a matriz 'a' preenchida
*/
void inicializaMatriz(int m, int a[m][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            a[i][j] = rand() % 10;  // 0 - 9
        }
    }
}

/*
Descrição: Procedimento para printar uma matriz m x m
Parametros: int m, int a[m][m]
*/
void mostraMatriz(int m, int a[m][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

/*
Descrição: Procedimento para printar um vetor de tamanho m
Parametros: int m, int s[m]
*/
void mostraVetor(int m, int s[m]){
    for(int i=0;i<m;i++){
        printf("%d ", s[i]);
    }
}

int main(){
    int m;

    srand(time(NULL));

    printf("Entre com o tamanho m: ");
    scanf("%d", &m);
    while(m < 1){
        printf("Tamanho invalido. Entre novamente: ");
        scanf("%d", &m);
    }

    int a[m][m];
    int s[m];

    inicializaMatriz(m, a);
    mostraMatriz(m, a);

    diagonal(m, a, s);
    mostraVetor(m, s);

    return 0;
}