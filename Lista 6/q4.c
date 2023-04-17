#include <stdio.h>
/*
Descrição: Mostra qual a variavel, seu endereço, e seu valor.
Parametros: Nenhum.
Retorno: Nenhum.
*/
void info(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);

    printf("a\t%p\t%d\n",&a,a);
    printf("b\t%p\t%d\n",&b,b);
    printf("c\t%p\t%d",&c,c);
}

int main(){
    info();
    return 0;
}