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

void modifica(int n, int m, int a[n][m]){
    int result[n][m];
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<m; j++){
            result[n-i-1][j] = a[i][j];
        }
    }
    mostra(n, m, result);
}


int main(){
    int n, m = 2;
    srand(time(NULL));

    printf("Entre com o numero de linhas da matriz: ");
    scanf("%d",&n);
    while (n<1)
    {
        printf("Tamanho de linhas invalido. Entre novamente: ");
        scanf("%d",&n);
    }

    int a[n][m];

    preenche(n, m, a);
    mostra(n, m, a);

    modifica(n, m, a);
}