#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void diagonal(int m, int a[m][m], int s[m]){
    int i, j;
    int soma = 0;

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i == j){
                soma += a[i][j];
                s[i] = a[i][j];
            }
        }
    }
    printf("Soma da diagonal: %d\n", soma);
}

void inicializaMatriz(int m, int a[m][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            a[i][j] = rand() % 10;
        }
    }
}

void mostraMatriz(int m, int a[m][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

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

    int a[m][m];
    int s[m];

    inicializaMatriz(m, a);

    mostraMatriz(m, a);

    diagonal(m, a, s);

    mostraVetor(m, s);

    return 0;
}