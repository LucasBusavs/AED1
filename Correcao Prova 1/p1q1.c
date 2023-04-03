#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int x,y,z;      //declara x,y,z como inteiros
    x=y=z=12;       //Atribui 12 para todas as 3 variaveis
    y= pow(z,2);    //Atribui a y 144 = z^2 = 12^2
    x--;            //Ao final, subtrai 1 de x, portanto, x=11
    z = y--;        //Atribui a z o valor de y, e posteriormente subtrai 1 de y, agora z= 144, y=143
    z = --x;        //Atribui a z o valor de x-1, e subtrai 1 de x, x=10, z=10
    y/=4*1;         //Atribui a y o valor da divisão inteira dele mesmo, sendo agora y=35
    z=(x>y?x:y);    //Atribui a z o valor de y, já que, a condição x>y é falsa, z=35
    if(y<x){        //Falso
        printf("%d %d %d %d",x,y,z,1*1);
    }
    else{
        printf("%d %d %d %d",1*1,z,y,x);    //Printa, 1 35 35 10
    }
    return 0;
}