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

void alteracao(int m, int r[m][m]){
    int aux[m];
    
    for(int i=0; i<m;i++){
        for(int j=0; j<m;j++){
            if(i == 1){
                aux[j] = r[i][j];
                r[i][j] = r[7][j];
                r[7][j] = aux[j];
            }
            else if(i == 3){
                aux[j] = r[i][j];
                r[i][j] = r[j][9];
                r[j][9] = aux[j];
            }
        }
    }

    mostra(m, r);

}

int main(){
    int m = 10;
    int z[m][m];

    srand(time(NULL));

    preenche(m, z);
    mostra(m, z);

    alteracao(m, z);

    return 0;
}