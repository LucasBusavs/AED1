#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preenche(int m, int n, int r[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            r[i][j] = rand() % 10;
        }
    }
}

void mostra(int m, int n, int r[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}

void produto(int m, int n, int a[m][n], int b[n][m]){
    int c[m][m];
    int elemento;
    int i,j,k;

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            elemento = 0;
            for(k=0;k<n;k++){
                elemento += a[i][k] * b[k][j];
            }
            c[i][j] = elemento;
            printf("%d ",elemento);
        }
        printf("\n");
    }
}

int main(){
    int m, n;
    srand(time(NULL));

    printf("Entre com a quantidade de linhas: ");
    scanf("%d", &m);
    printf("Entre com a quantidade de colunas: ");
    scanf("%d", &n);

    int a[m][n];
    int b[n][m];

    preenche(m, n, a);
    mostra(m, n, a);
    printf("\n");

    preenche(n, m, b);
    mostra(n, m, b);
    printf("\n");

    produto(m, n, a, b);

    return 0;
}