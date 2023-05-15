#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void misterio2(float vet[], int tam, float *y, float *z){
    *z=0;   //Altera o valor de onde z aponta para 0, z na main passa a ser 0
    for(int i = 0; i < tam;i++){    //Itera 5 vezes
        *z=*z+pow((vet[i] - *y),2); //Altera o valor de z da main para o somatório de cada elemento - a média, isso ao quadrado
    }   //z vale 20 ao final do loop
    *z=(float)*z/tam;   //Altera o valor de z da main para a divisão real de z por tam, z passa a valer 4
    *z=sqrt(*z);    //Altera o valor de z para 2
}

void misterio1(float vet[], int tam, float *x, float *y, float *z){
    *x=0;   //Altera o valor de onde x aponta para 0, x na main passa a valer 0
    for(int i = 0; i < tam;i++){    //Itera 5 vezes
        *x=*x+vet[i];   //Altera o valor de onde x aponta para a soma de todos os elementos de vet, x na main igual a 50
    }
    *y=*x/(float)tam;   //Altera o valor de onde y aponta, para a 10, y na main passa a valer 10 
    misterio2(vet, tam, y, z);  //Chama misterio1, apenas tam é passado por valor
}

int main(){
    int t=5;    //Declara t, e atribui a ele 5
    float vet[5] = {10,13,11,7,9}, x, y, z; //Declara e inicia vet com 5 posições, e declara x,y,z
    misterio1(vet, t, &x, &y, &z);  //Chama misterio1, passa por valor t, e por referencia os outros 4

    if(z/y>3.0){    //Falso
        printf("Alto %d %.1f %.1f %.1f", t,x,y,z);
    }
    else{
        printf("Baixo %.1f %.1f %.1f %d", z, y, x, t);  //z=2, y=10, x=50 t=5
    }
}

