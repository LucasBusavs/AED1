#include <time.h>
#include <stdio.h>

#define TAM 10

void preenche(int v[]){
    int num;
    int neg;
    for(int i=0; i<TAM;i++){
        num = rand() % 10;
        neg = rand() % 2;
        if(neg == 1){
            num = num * -1;
        }
        v[i] = num;
    }
}

void mostra(int v[], int tam){
    for(int i=0; i<tam;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

int* neg(int v[]){
    int tam = 0;
    int i;
    int ultPos = -1;
    
    for(i=0; i<TAM;i++){
        if(v[i]<0){
            tam++;
        }
    }

    int result[tam];

    for(i=0; i<tam;i++){
        for(int j=0; j<TAM;j++){
            if(v[j]<0){
                if(ultPos<j){
                    ultPos = j;
                    result[i] = v[j];
                    break;
                }
            }
        }
    }
    return result;
}

int main(){
    int vet[TAM];
    srand(time(NULL));

    preenche(vet);
    int tam = sizeof(vet) / sizeof(vet[0]);

    mostra(vet, tam);

    int *result = neg(vet);
    tam = sizeof(result) / sizeof(result[0]);
    mostra(result, tam);
    
    return 0;
}