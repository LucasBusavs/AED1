#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Descrição: Procedimento para inicialização de elementos inteiros de uma matriz n x m
Parametros: int n, int m, int a[n][m]
Retorno: "Retorna" por referencia a matriz r preenchida
*/
void inicializaMatriz(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = rand() % 10; // 0 - 9
        }
    }
}

/*
Descrição: Procedimento para printar uma matriz n x m
Parametros: int n, int m, int a[n][m]
*/
void mostraMatriz(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

/*
Descrição: Procedimento para calcular e mostrar matriz c, resultante de a+b
Parametros: int n, int m, int a[n][m], int b[n][m]
*/
void calculaC(int n, int m, int a[n][m], int b[n][m]){
    int c[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n, m;

    srand(time(NULL));

    printf("Entre com o numero de linhas: ");
    scanf("%d", &n);
    while (n < 1)
    {
        printf("Quantidade de linhas invalida. Entre novamente: ");
        scanf("%d", &n);
    }
    printf("Entre com o numero de colunas: ");
    scanf("%d",&m);
    while(m < 1){
        printf("Quantidade de colunas invalida. Entre novamente: ");
        scanf("%d", &m);
    }

    int a[n][m], b[n][m];

    inicializaMatriz(n, m, a);
    mostraMatriz(n, m, a);
    printf("\n");

    inicializaMatriz(n, m, b);
    mostraMatriz(n, m, b);
    printf("\n");

    calculaC(n, m, a, b);

    return 0;
}