#include <stdio.h>
#include <string.h>

struct livro{
    int id;
    char titulo[100];
    int ano;
    char autor[100];
};

void cadastro(int n, struct livro livros[]){
    for(int i=0;i<n;i++){
        livros[i].id = i+1;
        getchar();
        printf("Entre com o titulo do livro %d: ",i+1);
        gets(livros[i].titulo);
        printf("Entre com o autor do livro %d: ",i+1);
        gets(livros[i].autor);
        printf("Entre com o ano do livro %d: ",i+1);
        scanf("%d",&livros[i].ano);
        fflush(stdin);
    }
}

int main(){
    int op;
    int flag = 0;
    int n;

    printf("\t\t*****REGISTROS*****\n");
    do{
        printf("\nEscolha uma opcao: \n");
        printf("1 - Cadastro de livros\n");
        printf("2 - Listar por ano\n");
        printf("3 - Atualizar nome do livro\n");
        printf("0 - Sair\n");
        scanf("%d", &op);
        fflush(stdin);
        while(op < 0 || op > 3){
            printf("Opcao invalida. Entre novamente: ");
            scanf("%d", &op);
            fflush(stdin);
        }

        if(op != 1 && !flag && op != 0){
            printf("Nao ha livros cadastrados!\n");
        }
        else if(op == 1){
            printf("Quantos livros deseja cadastrar: ");
            scanf("%d",&n);
            fflush(stdin);
            struct livro livros[n];
            cadastro(n, livros);
            flag = 1;
        }
        else if(op == 2){

        }
        else if(op == 3){

        }

    }while(op != 0);

    return 0;
}