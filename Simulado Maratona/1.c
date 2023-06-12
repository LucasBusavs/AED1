#include <stdio.h>

int ultIdade(int m, int a, int b){
    int c;
    c = m - (a + b);
    return c;
}

int maisVelho(int a, int b, int c){
    int aux = 0;
    aux = a;
    if(b>a && b>=c){
        aux = b;
    }
    else if(c>a && c>=b){
        aux = c;
    }
    return aux;
}

int main(){
    int m, a, b;
    int c, mV;
    do{
        scanf("%d", &m);
    }while(m<40 || m>110);
    do{
        scanf("%d", &a);
    }while(a<1 || a>=m);
    do{
        scanf("%d", &b);
    }while(b<1 || b>=m || b == a);
    c = ultIdade(m, a, b);
    mV = maisVelho(a, b, c);
    printf("%d", mV);
    return 0;
}