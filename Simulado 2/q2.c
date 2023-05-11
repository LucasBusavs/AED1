#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Descrição: Procedimento para preencher vetor qualquer de tamanho n
Parametros: int n, int v[]
Return: "Retorna" por referencia o vetor preenchido
*/
void preenche(int n, int v[]){
    for(int i=0; i<n; i++){
        v[i] = rand() % 10;
    }
}

/*
Descrição: Procedimento para printar qualquer vetor de tamanho n
Parametros: int n, int v[]
Return: Mosta termo a termo do vetor preenchido
*/
void mostra(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

int mult3(int n, int a[], int b[]){
    int qntA = 0, qntB = 0;
    for(int i=0; i<n; i++) {
        if(a[i] % 3 == 0 && a[i] != 0){ //Desconsidera o 0
            qntA++;
        }
        if(b[i] % 3 == 0 && b[i] != 0){ //Desconsidera o 0
            qntB++;
        }
    }
    if(qntA == qntB){
        return 1;
    }
    return -1;
}

int main(){
    int n;
    int mult;

    srand(time(NULL));

    printf("Defina o tamanho dos vetores: ");
    scanf("%d",&n);
    while (n<1)
    {
        printf("Tamanho dos vetores invalido. Entre novamente: ");
        scanf("%d",&n);
    }

    int vetA[n], vetB[n];
    preenche(n, vetA);
    mostra(n, vetA);
    preenche(n, vetB);
    mostra(n, vetB);

    mult = mult3(n, vetA, vetB);
    
    if(mult == 1){
        printf("Mesma quantidade de multiplos de 3\n");
    }
    else{
        printf("Quantidade de multiplos de 3 diferentes\n");
    }

    return 0;
}