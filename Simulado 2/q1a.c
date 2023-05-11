#include <stdio.h>

void misterio(int vet[5], int * a, int * b) { 
    *a = *b = vet[0];   //Atribui para o endereço que a e b apontam, o primeiro elemento do vetor 'vet'
    for (int i=0;i<5;i++) 
        if (vet[i] < *a)    //Se o valor do endereço que a está apontando for maior que o elemento i do vetor 'vet' 
            *a = vet[i];    //Altera o valor do endereço que a está apontando para o elemento i do vetor
        else if (vet[i] > *b)   //Se o valor do endereço que b está apontando for menor que o elemento i do vetor 'vet'
            *b = vet[i];    //Altera o valor do endereço que a está apontando para o elemento i do vetor
} 
int main() { 
    int k[] = {6, 2, 3, 4, 5}; 
    int x, y; 
    misterio(k, &x, &y);    //x terá o menor elemento, e y o maior elemento, do vetor k
    if (x > y) 
        printf("Ola AAA %d %d", x, y); 
    else 
        printf("Ola BBB %d %d", y, x);  //Printando essa linha
    return 0;
}