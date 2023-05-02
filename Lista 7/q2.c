#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

void recebe(int notas[]){
    for(int i=0; i<TAMANHO; i++){
        notas[i] = rand() % 10;
        printf("%d ",notas[i]);
    }
    printf("\n");
}

void calcula(int notas[]){
    float media = 0;
    int aprovados = 0;

    for(int i=0; i<TAMANHO; i++){
        media += notas[i];
        if(notas[i]>=6){
            aprovados++;
        }
    }

    printf("Media: %.2f\n", media/10);
    printf("Aprovados: %d\n", aprovados);
}

int main(){
    int notas[TAMANHO];

    srand(time(NULL));

    recebe(notas);

    calcula(notas);

    return 0;
}