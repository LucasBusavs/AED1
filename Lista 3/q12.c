#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[10];
    float med = 0;
    float maior = 0, menor = 100;
    int apr = 0, repr = 0;

    for(int i=0;i<10;i++){
        printf("Entre com a nota final do aluno %d: ",i+1);
        scanf("%f", &notas[i]);
        while (notas[i]<0 || notas[i]>100)
        {
            printf("Entre com a nota final valida do aluno %d: ",i+1);
            scanf("%f", &notas[i]);
        }
    }

    for(int i=0;i<10;i++){
        med += notas[i];

        if(notas[i]>maior){
            maior = notas[i];
        }
        else if(notas[i]<menor){
            menor = notas[i];
        }

        if(notas[i]>=60){
            apr++;
        }
        else{
            repr++;
        }
    }
    med /= (float)10;
    printf("Media: %.1f\n",med);
    printf("Maior nota: %.1f\n",maior);
    printf("Menor nota: %.1f\n",menor);
    printf("Quantidade de aprovados: %d\n",apr);
    printf("Quantidade de reprovados: %d\n",repr);
    return 0;
}