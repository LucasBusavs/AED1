#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Descrição: Procedimento para inicialização de elementos inteiros de uma matriz m x m
Parametros: int m, int r[m][m]
Retorno: "Retorna" por referencia a matriz r preenchida
*/
void preenche(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            r[i][j] = rand() % 10;  // 0 - 9
            //scanf("%d",&r[i][j]); //Input
        }
    }
}

/*
Descrição: Procedimento para printar uma matriz m x m
Parametros: int m, int r[m][m]
*/
void mostra(int m, int r[m][m]){
    for(int i=0; i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}

/*
Descrição: Procedimento para verificar se uma matriz é ou não um quadrado mágico
Parametros: int m, int r[m][m]
*/
void quadradoMagico(int m, int r[m][m]){
    int somaDiagPri = 0, somaDiagSec = 0;
    int somaLinha[m], somaColuna[m];
    int i, j;
    int flag = 0;

    //Calcula a soma das diagonais
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
    //Primeira condição para possibilidade de uma matriz quadarada mágica
    if(somaDiagPri == somaDiagSec){
        //Verificação da soma das colunas
        for(i=0; i<m;i++){
            somaColuna[i] = 0;
            for(j=0;j<m;j++){
                somaColuna[i] += r[i][j]; 
            }
            if(i!=0){
                //Se uma for diferente já não é quadrada mágica
                if(somaColuna[i] != somaColuna[i-1]){
                    flag = 1;
                    break;
                }
            }
        }

        if(!flag){
            //Verifica a soma da linhas
            for(j=0; j<m;j++){
                somaLinha[j] = 0;
                for(i=0;i<m;i++){
                    somaLinha[j] += r[i][j]; 
                }
                if(j!=0){
                    //Caso pelo menos uma diferente, não quadrado mágico
                    if(somaLinha[j] != somaLinha[j - 1]){
                        flag = 1;
                        break;
                    }
                }
            }
        }

        //Compara a soma das linhas com a das colunas, e com a diagonal principal, que neste ponto é igual a secundária
        if(!flag){
            if(somaLinha[0] != somaColuna[0] || somaLinha[0] != somaDiagPri){
                flag = 1;
            }
        }
        
        if(flag){
            printf("Nao quadrado magico\n");
        }
        else{
            printf("quadrado magico\n");
        }
    }
    else{
        printf("Nao quadrado magico\n");
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