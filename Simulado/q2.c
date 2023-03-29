#include <stdio.h>

int main(){
    int n, apr=0, rep=0;
    float n1,n2,n3,medA,medC=0;

    printf("Entre com a quantidade de alunos: ");
    scanf("%d",&n);
    while (n<1)
    {
        printf("Entre com a quantidade de alunos valida: ");
        scanf("%d",&n);
    }
    for(int i=1; i<=n; i++){
        printf("Entre com a nota da prova 1 do aluno %d: ",i);
        scanf("%f",&n1);
        while (n1<0 || n1>10){
            printf("Entre com uma nota valida: ");
            scanf("%f",&n1);
        }
        printf("Entre com a nota da prova 2 do aluno %d: ",i);
        scanf("%f",&n2);
        while (n2<0 || n2>10){
            printf("Entre com uma nota valida: ");
            scanf("%f",&n2);
        }
        printf("Entre com a nota da prova 3 do aluno %d: ",i);
        scanf("%f",&n3);
        while (n3<0 || n3>10){
            printf("Entre com uma nota valida: ");
            scanf("%f",&n3);
        }
        medA = (n1+n2+n3)/3;
        printf("Media aluno %d: %.2f\n",i,medA);
        medC+=medA;     //Media parcial
        if(medA>=6){
            apr++;
        }
        else{
            rep++;
        }
    }
    medC/=n;        //Media real
    printf("Media da Classe: %.2f\n",medC);
    printf("Aprovados: %d\n",apr);
    printf("Reprovados: %d\n",rep);
    return 0;
}