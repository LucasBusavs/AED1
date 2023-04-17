#include <stdio.h>
/*
Descrição: Encontra o valor maior e menor entre 3 numeros.
Parametros: Int a, Int b, Int c.
Retorno: "Retorno" por referencia dois inteiros, maior e menor.
*/
void maiMen(int a, int b, int c, int *maior, int *menor){
    int men, ma;
    if(a>=b && b>=c){
        *maior = a;
        *menor = c;
    }
    else if(a>=c && c>=b){
        *maior = a;
        *menor = b;
    }
    else if(b>=a && a>=c){
        *maior = b;
        *menor = c;
    }
    else if(b>=c && c>=a){
        *maior = b;
        *menor = a;
    }
    else if(c>=a && a>=b){
        *maior = c;
        *menor = b;
    }
    else{
        *maior = c;
        *menor = a;
    }
}

int main(){
    int maior, menor;
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);
    maiMen(a,b,c,&maior,&menor);
    printf("%d %d",maior,menor);

    return 0;
}