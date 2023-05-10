#include <stdio.h>

void leia(int m, int n, int r[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&r[i][j]);
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

void maior(int m, int n, int r[m][n]){
    int maior;
    int linha, coluna;

    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(i == 0 && j == 0){
                maior = r[i][j];
                linha = i+1;
                coluna = j+1;
            }
            else if(maior < r[i][j]){
                maior = r[i][j];
                linha = i+1;
                coluna = j+1; 
            }
        }
    }
    printf("Maior elemento: %d\n", maior);
    printf("Linha do elemento: %d\n", linha);
    printf("Coluna do elemento: %d\n", coluna);
}

int main(){
    int m, n;

    printf("Entre com a quantidade de linhas: ");
    scanf("%d", &m);
    printf("Entre com a quantidade de colunas: ");
    scanf("%d", &n);

    int r[m][n];

    leia(m, n, r);
    
    mostra(m, n, r);

    maior(m, n, r);

    return 0;
}