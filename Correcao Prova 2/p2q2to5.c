#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

float q2(float vet[]){
    float pri = vet[0], seg = vet[0];
    for(int i=1;i<10;i++){
        if(vet[i]>pri){
            seg = pri;
            pri = vet[i]; 
        }
        else if(vet[i]>seg){
            seg = vet[i];
        }
    }
    return seg;
}

bool q3(char s[]){
    int tam = strlen(s);

    if(tam != 15){
        return false;
    }

    if(s[9] != ' '){
        return false;
    }

    if(s[3] != '.' || s[5] != '.'){
        return false;
    }

    if(!(isalpha(s[10]) && isalpha(s[14]))){
        return false;
    }

    if(!(isupper(s[10]))){
        return false;
    }

    if(!(islower(s[14]))){
        return false;
    }

    if(!(isdigit(s[0]) && isdigit(s[1]) && isdigit(s[2]) && isdigit(s[4]) && isdigit(s[6]) && isdigit(s[7]) && isdigit(s[8]))){
        return false;
    }
    return true;
}

void inicializaMatriz(int m, int n, int a[m][n]){
    for(int i = 0; i<m; i++){
        for(int j = 0;j < n; j++){
            a[i][j] = rand() % 20 + 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void q4(int idade[8][8], float med[]){
    for(int j = 0; j<8;j++){
        med[j] = 0;
        for(int i = 0; i<8; i++){
            med[j] += idade[i][j];
        }
        med[j] /= 8;
    }
}

void q5(int idade[8][8], float med[]){
    int abaixo = 0;
    for(int j = 0; j<8;j++){
        abaixo = 0;
        for(int i = 0; i<8; i++){
            if(idade[i][j] < med[j]){
                abaixo++;
            }
        }
        printf("%d alunos estao abaixo da media de sua fileira\n", abaixo);
    }    
}

int main(){
    int op = 0;
    float vet[] = {0,1,2,3,4,5,9,7,8,7};
    float segMaior = 0;
    bool valido;
    char s[100];
    int idade[8][8];
    float medFila[8];

    srand(time(NULL));

    do{
        printf("Entre com a opcao para questao(2-5) e 0 para sair: ");
        scanf("%d", &op);
        fflush(stdin);
        while((op<2 || op>5) && op!=0){
            printf("Opcao invalida. Entre com a opcao para questao(2-5): ");
            scanf("%d", &op);
            fflush(stdin); 
        }
        if(op==2){
            segMaior = q2(vet);
        }
        else if(op == 3){
            fflush(stdin);
            printf("Entre com codigo: ");
            scanf("%[^\n]", &s);
            fflush(stdin);
            valido = q3(s);
            if(valido){
                printf("Valido\n");
            }
        }
        else if(op == 4){
            inicializaMatriz(8, 8, idade);
            q4(idade, medFila);
        }
        else if(op == 5){
            q5(idade, medFila);
        }
    }while(op!=0);

    return 0;
}
