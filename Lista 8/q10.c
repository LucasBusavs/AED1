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
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void calcula(int m, int r[m][m]){
    float media = 0;
    int count = 45;
    int aux = 1;

    for(int i=(m-2); i>=0;i--){
        for(int j=(m-1);j>=(m-aux);j--){
            media+=r[i][j];
            //count++;
        }
        aux++;
    }
    media/=count;
    printf("%.2f ", media);
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