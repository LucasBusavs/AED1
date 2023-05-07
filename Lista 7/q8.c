#include <time.h>
#include <stdio.h>

#define TAM 10

void preenche(int x[], int y[]){
    int rand1, rand2;

    for(int i = 0; i <TAM; i++){
        rand1 = rand() % 10;
        rand2 = (rand() % 10) + 10;
        x[i] = rand1;
        y[i] = rand2;
    }
}

void novoV(int x[], int y[], int tamX, int tamY){
    int tam = tamX+tamY;
    int v[tam];

    for(int i = 0; i <tam/2; i++){
        v[i * 2] = y[i];
        if(i != 0){
            v[(i*2)-1] = x[i-1];
        }
    }
    v[tam - 1] = x[tamX - 1];
    mostra(v, tam);
}

void mostra(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int x[TAM], y[TAM];
    int tamX, tamY;

    srand(time(NULL));

    preenche(x, y);

    tamX = sizeof(x) / sizeof(x[0]);
    tamY = sizeof(y) / sizeof(y[0]);

    mostra(x, tamX);
    mostra(y, tamY);

    novoV(x, y, tamX, tamY);

    return 0;
}