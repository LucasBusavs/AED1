#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Descrição: Procedimento que prenche um vetor int de tamanho TAM, com numeros aleatórios de -9 a 9
Parametros: Vetor 'v' do tipo int
Return: "Retorna" por referencia o vetor 'v' preenchido
*/
void preenche(int v[]){
    int num;
    int neg;
    for(int i=0; i<TAM;i++){
        num = rand() % 10;
        neg = rand() % 2;
        if(neg){
            num = num * -1;
        }
        v[i] = num;
    }
}

/*
Descrição: Procedimento que imprime um vetor int qualquer
Parametros: Vetor 'v' do tipo int, tamanho de 'v' tambem do tipo int
Return: Printa o vetor termo a termo
*/
void mostra(int v[], int tam){
    for(int i=0; i<tam;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

/*
Descrição: Procedimento que copia apenas os valores negativos do vetor 'v' para o vetor 'result'
Parametros: Vetor 'v' do tipo int, Vetor 'result' do tipo int, tamanho de 'result' tambem do tipo int
Return: "Retorna" o vetor 'result' preenchido
*/
void neg(int v[], int result[], int tam){
    int ultPos = -1;

    for(int i=0; i<tam;i++){
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
}

int main(){
    int vet[TAM];
    int tam = 0;
    srand(time(NULL));

    preenche(vet);
    mostra(vet, TAM);

    for(int i=0; i<TAM;i++){
        if(vet[i]<0){
            tam++;
        }
    }
    int result[tam];

    neg(vet, result, tam);
    mostra(result, tam);

    return 0;
}