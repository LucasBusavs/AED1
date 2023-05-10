#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preenche(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            r[i][j] = rand() % 11;
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
}

void quadradoMagico(int m, int r[m][m]){
    int somaDiagPri = 0, somaDiagSec = 0;
    int somaLinha[m], somaColuna[m];
    int i, j;
    int flag = 0;

    for(i=0; i<m;i++){
        for(j=0;j<m;j++){
            if(i == j){
                somaDiagPri += r[i][j];
            }
            if((i+j) == (m-1)){
                somaDiagSec += r[i][j];
            }
        }
    }

    if(somaDiagPri == somaDiagSec){
        for(i=0; i<m;i++){
            somaColuna[i] = 0;
            for(j=0;j<m;j++){
                somaColuna[i] += r[i][j]; 
            }
            if(i!=0){
                if(somaColuna[i] != somaColuna[i-1]){
                    flag = 1;
                    break;
                }
            }
        }

        if(!flag){
            for(j=0; j<m;j++){
                somaLinha[j] = 0;
                for(i=0;i<m;i++){
                    somaLinha[j] += r[i][j]; 
                }
                if(j!=0){
                    if(somaLinha[j] != somaLinha[j - 1]){
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(!flag){
            if(somaLinha[0] != somaColuna[0] || somaLinha[0] != somaDiagPri){
                flag = 1;
            }
        }
        
        if(flag){
            printf("Nao quadrado magico\n");
        }
    }
    else{
        printf("Nao quadrado magico\n");
    }

    if(!flag){
        printf("quadrado magico\n");
    }
}

int main(){
    int m;
    srand(time(NULL));

    printf("Entre com a ordem da matriz quadrada: ");
    scanf("%d",&m);

    int a[m][m];

    preenche(m, a);
    mostra(m, a);
    printf("\n");

    quadradoMagico(m, a);

    return 0;
}