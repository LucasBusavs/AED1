#include <stdio.h>
#include <stdbool.h>
/*
Descrição: Calcula o operação booleana
Parametros: bool a, bool b, bool c.
Retorno: "Retorno" por referencia um bool com o resultado da operação
*/
void op(bool a, bool b, bool c,bool *s){
    *s = !b;
    *s = *s&&c;
    *s = *s||a;
    *s = !(*s);
}

int main(){
    bool a, b, c, s;
    int a0,b0,c0;

    scanf("%d %d %d",&a0,&b0,&c0);

    if(a0){
        a = true;
    }
    else{
        a = false;
    }

    if(b0){
        b = true;
    }
    else{
        b = false;
    }

    if(c0){
        c = true;
    }
    else{
        c = false;
    }

    op(a,b,c,&s);

    if(s){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}