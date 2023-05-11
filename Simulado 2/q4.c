#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Descrição: Procedimento para preencher matriz qualquer de tamanho m x n
Parametros: int m, int n, int v[m][n]
Return: "Retorna" por referencia a matriz preenchida preenchido
*/
void preenche(int m, int n, int v[m][n]){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) {
            v[i][j] = rand() % 10;
        }
    }
}

/*
Descrição: Procedimento para printar matriz qualquer de tamanho m x n
Parametros: int m, int n, int v[m][n]
Return: Mosta termo a termo da matriz preenchida
*/
void mostra(int m, int n, int v[m][n]){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void calcula(int m, int n, int a[m][n], int b[m][n]){
    int prodA = 1, prodB = 1;
    int mmA = 0, mmB = 0;
    float medA = 0, medB = 0;
    int i, j;
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++) {
            if(a[i][j] % 2 == 1){
                prodA *= a[i][j];
            }
            if(b[i][j] % 2 == 1){
                prodB *= b[i][j];
            }
            medA += a[i][j];
            medB += b[i][j];
        }
    }

    medA/= (m*n);
    medB/= (m*n);

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++) {
            if(a[i][j] < medA){
                mmA++;
            }
            if(b[i][j] < medB){
                mmB++;
            }
        }
    }

    printf("Produto dos elementos impares de A: %d\n", prodA);
    printf("Produto dos elementos impares de B: %d\n", prodB);
    printf("Quantidade %d de elementos de A estao abaixo da media\n", mmA);
    printf("Quantidade %d de elementos de B estao abaixo da media\n", mmB);
}

int main(){
    int m, n;
    srand(time(NULL));

    printf("Entre com a quantidade de linhas da matriz: ");
    scanf("%d",&m);
    while (m<1)
    {
        printf("Tamanho de linha invalido. Entre novamente: ");
        scanf("%d",&m);
    }

    printf("Entre com a quantidade de colunas da matriz: ");
    scanf("%d",&n);
    while (n<1)
    {
        printf("Tamanho de coluna invalido. Entre novamente: ");
        scanf("%d",&n);
    }

    int a[m][n], b[m][n];

    preenche(m, n, a);
    mostra(m, n, a);
    preenche(m, n, b);
    mostra(m, n, b);

    calcula(m, n, a, b);

    return 0;
}