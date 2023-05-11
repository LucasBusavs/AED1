#include <stdio.h>

//Atribui por referencia o menor valor do vetor ao endereço que x aponta
void misterio1(int vet[5], int * x) { 
    *x = vet[0]; 
    for (int i=0;i<5;i++) 
        if (vet[i] < *x) 
            *x = vet[i]; 
}

//Retorna o maior elemento do vetor 
int misterio2(int vet[5]) { 
    int p = vet[0]; 
    for (int i=0;i<5;i++) 
        if (vet[i] > p) 
            p = vet[i]; 
    return p; 
} 
int main() 
{ 
    int k[] = {4, 7, 1, 4, 8}; 
    int x = misterio2(k), y; 
    misterio1(k, &y); 
    printf("%d %d", x, y); 
}