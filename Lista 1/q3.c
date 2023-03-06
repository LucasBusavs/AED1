#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,d=1;

    a = -2;
    b = a*a;
    c = d++;
    d = ++c + 5;
    printf("%d %d %d %d\n",a,b,c,d);
    return 0;
}