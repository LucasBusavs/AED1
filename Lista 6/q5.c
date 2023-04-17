#include <stdio.h>
/*
Descrição: Mostra qual a variavel, seu endereço, e seu valor.
Parametros: Nenhum.
Retorno: Nenhum.
*/
void info(){
    int v[3];

    for(int i=0; i<3;i++){
        scanf("%d",&v[i]);
        printf("%d\t",i);
        printf("%p\t",&v[i]);
        printf("%d\t",v[i]);
        printf("\n");
    }
}

int main(){
    info();
    return 0;
}