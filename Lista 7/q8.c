#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Descrição: Procedimento que preenche dois vetores inteiros com valores pseudo-aleatorios, de tamanho TAM
Parametros: Vetor 'x' do tipo int, Vetor 'y' do tipo int
Return: "Retorna" por referencia os dois vetores preenchidos
*/
void preenche(int x[], int y[]){
    int rand1, rand2;

    for(int i = 0; i <TAM; i++){
        rand1 = rand() % 10;        // 0 - 9
        rand2 = (rand() % 10) + 10; // 10 - 19
        x[i] = rand1;
        y[i] = rand2;
    }
}

/*
Descrição: Procedimento que imprime um vetor int qualquer
Parametros: Vetor 'v' do tipo int, tamanho de 'v' tambem do tipo int
Return: Printa o vetor termo a termo
*/
void mostra(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

/*
Descrição: Procedimento que cria um vetor 'v' e preenche com os dois vetores inteiros com valores pseudo-aleatorios, de tamanho TAM
Parametros: Vetor 'x' do tipo int, Vetor 'y' do tipo int
Return: Mostra o novo vetor preenchido
*/
void novoV(int x[], int y[]){
    int tam = TAM * 2;
    int v[tam];
    //Preenche o vetor 'v' tanto posições impares como pares, simultaneamente
    for(int i = 0; i < tam/2; i++){
        //Posições pares iguais aos elementos de 'y'
        v[i * 2] = y[i];
        //Posições impares iguais aos elementos de 'x'
        if(i != 0){
            //Loop entra as primeiras TAM-2 vezes
            v[(i*2)-1] = x[i-1];
        }
    }
    //Afim de arrumar a ultima posição impar do vetor
    v[tam - 1] = x[TAM - 1];
    mostra(v, tam);
}

int main(){
    int x[TAM], y[TAM];
    int tamX, tamY;

    srand(time(NULL));

    preenche(x, y);

    mostra(x, TAM);
    mostra(y, TAM);

    novoV(x, y);

    return 0;
}