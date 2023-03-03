#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3;
    printf("Entre com o valor de 3 notas\n");
    scanf("%f %f %f",&n1, &n2, &n3);
    printf("A soma das 3 notas: %.1f\n",n1+n2+n3);
    printf("A media das 3 notas: %.1f\n",(n1+n2+n3)/3);
    printf("O produto das 3 notas: %.1f\n",n1*n2*n3);
    return 0;
}