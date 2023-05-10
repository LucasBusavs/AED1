#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preenche(int m, int n, int r[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                r[i][j] = rand() % 10;
            }
            else{
                r[i][j] = r[0][j] * (i+1);
            }
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
    printf("\n");
}

int main(){
    int m = 10;
    int n = 5;
    int z[m][n];

    srand(time(NULL));

    preenche(m, n, z);
    mostra(m, n, z);

    return 0;
}