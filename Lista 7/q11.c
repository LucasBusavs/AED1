#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preenche(float jan[]){
    int tamInter = 40 - 15;
    float randN;
    for(int i=0; i<31; i++){
        randN = (float)rand() / (float)RAND_MAX;
        randN = randN * tamInter + 15;
        jan[i] = randN;
        printf("%.2f ", jan[i]);
    }
    printf("\n");
}

void calcula(float jan[]){
    float menor = 40, maior = 15;
    float media = 0;
    int i;
    int menorMedia = 0;

    for(i = 0; i <31; i++){
        media += jan[i];
        if(jan[i] < menor){
            menor = jan[i];
        }
        else if(jan[i] > maior){
            maior = jan[i];
        }
    }
    media /= 31;

    printf("Maior temp: %.2f\n", maior);
    printf("Menor temp: %.2f\n", menor);
    printf("Temp media: %.2f\n", media);

    for(i = 0; i <31; i++){
        if(jan[i] < media){
            menorMedia++;
        }
    }

    printf("Dias com temp menor que a media: %d", menorMedia);
}

int main(){
    float jan[31];

    srand(time(NULL));

    preenche(jan);
    calcula(jan);

    return 0;
}