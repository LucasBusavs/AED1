#include <stdio.h>

/*
Descrição: Procedimento para leitura de elementos inteiros de uma matriz m x n
Parametros: int m, int n, int r[m][n]
Retorno: "Retorna" por referencia a matriz r preenchida
*/
void leia(int m, int n, int r[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            printf("Entre com o elemento [%d][%d]: ", i, j);
            scanf("%d",&r[i][j]);
        }
    }
}

/*
Descrição: Procedimento para printar uma matriz m x n
Parametros: int m, int n, int r[m][n]
*/
void mostra(int m, int n, int r[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}

/*
Descrição: Procedimento para mostrar o maior elemento de uma matriz, e sua posição
Parametros: int m, int n, int r[m][n]
*/
void maior(int m, int n, int r[m][n]){
    int maior = r[0][0];
    int linha = 1, coluna = 1;  

    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(maior < r[i][j]){
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
    while(m < 1){
        printf("Quantidade de linhas invalida. Entre novamente: ");
        scanf("%d", &m);    
    }
    printf("Entre com a quantidade de colunas: ");
    scanf("%d", &n);
    while(n < 1){
        printf("Quantidade de colunas invalida. Entre novamente: ");
        scanf("%d", &n); 
    }

    int r[m][n];

    leia(m, n, r);
    mostra(m, n, r);

    maior(m, n, r);

    return 0;
}