#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

/*
Descrição: Procedimento que recebe e preenche vetor de notas
Parametros: vetor 'notas' do tipo float
Return: "Retorna" por referencia o vetor preenchido de notas
*/
void recebe(float notas[]){
    for(int i=0; i<TAMANHO; i++){
        printf("Entre com a nota do aluno %d: ", i+1);
        scanf("%f",&notas[i]);
        // Definição do intervalo de notas válidas
        while(notas[i] > 10 || notas[i] < 0){
            printf("Nota invalida. Entre com a nota do aluno %d entre 0 e 10: ", i+1);
            scanf("%f",&notas[i]);
        }
    }
    printf("\n");
}

/*
Descrição: Procedimento que faz o calculo da média das notas, e o quantitativo de alunos que ficaram acima da média
Parametros: vetor 'notas' do tipo float
Return: Sem retorno, mas mostras o resultado na tela
*/
void calcula(float notas[]){
    float media = 0;
    int acimaMedia = 0;

    for(int i=0; i<TAMANHO; i++){
        media += notas[i];
    }
    media/=10;

    for(int i=0; i<TAMANHO; i++){
        if(notas[i] > media){
            acimaMedia++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Acima da media: %d\n", acimaMedia);
}

int main(){
    float notas[TAMANHO];

    recebe(notas);

    calcula(notas);

    return 0;
}