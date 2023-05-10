#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void inicializaMatriz(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = rand() % 10;
        }
    }
}

void mostraMatriz(int n, int m, int a[m][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void calculaC(int n, int m, int a[n][m], int b[n][m]){
    int c[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    mostraMatriz(n, m, c);
}

int main(){
    int n, m;

    srand(time(NULL));

    printf("Entre com o numero de linhas: ");
    scanf("%d", &n);
    printf("Entre com o numero de colunas: ");
    scanf("%d",&m);

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