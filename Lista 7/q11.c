#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Descrição: Procedimento que preenche vetor float com valores pseudo-aleatorios, com as temperaturas do mês de Janeiro
Parametros: Vetor 'jan' do tipo float
Return: "Retorna" por referencia o vetor preenchido
*/
void preenche(float jan[]){
    int tamInter = 40 - 15;
    float randN;
    for(int i=0; i<31; i++){
        randN = rand() / (float)RAND_MAX;   //Gera numeros entre 0 e 1
        randN = randN * tamInter + 15;      //Calcula uma temperatura entre 15 e 40, do tipo float
        jan[i] = randN;
        printf("%.2f ", jan[i]);
    }
    printf("\n");
}

/*
Descrição: Procedimento que calcula a temperatura média, a maior e a menor temperatura, e por fim, contabiliza os dias que tiveram uma
temperatura menor que a média.
Parametros: Vetor 'jan' do tipo float
Return: Mostra na tela os resultados
*/
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