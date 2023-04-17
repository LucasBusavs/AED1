#include <stdio.h>

int main(){
    char c='s', *cp=&c;
    int i=0, *ip=&i;
    float f=0.0, *fp=&f;
    double d=0.0, *dp=&d;
    printf("O Endereco do char %c e %p. Essa variavel ocupa %lu bytes.\n",c,&c,sizeof(c));
    printf("O Endereco do char %c e %p. Essa variavel ocupa %lu bytes.\n",*cp,cp,sizeof(cp));
    printf("O Endereco do int %d e %p. Essa variavel ocupa %lu bytes.\n",i,&i,sizeof(i));
    printf("O Endereco do int %d e %p. Essa variavel ocupa %lu bytes.\n",*ip,ip,sizeof(ip));
    printf("O Endereco do float %f e %p. Essa variavel ocupa %lu bytes.\n",f,&f,sizeof(f));
    printf("O Endereco do float %f e %p. Essa variavel ocupa %lu bytes.\n",*fp,fp,sizeof(fp));
    printf("O Endereco do double %lf e %p. Essa variavel ocupa %lu bytes.\n",d,&d,sizeof(d));
    printf("O Endereco do double %lf e %p. Essa variavel ocupa %lu bytes.",*dp,dp,sizeof(dp));
    return 0;
}