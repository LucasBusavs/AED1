#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preenche(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            r[i][j] = rand() % 10;
            //scanf("%d",&r[i][j]);
        }
    }
}

void mostra(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void calcula(int m, int r[m][m]){
    int soma = 0;
    int aux = 1;

    for(int i=0; i<m;i++){
        for(int j=0;j<aux;j++){
            soma+=r[i][j];
        }
        aux++;
    }

    printf("%d ", soma);
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