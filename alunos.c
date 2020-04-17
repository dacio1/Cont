#include<stdio.h>
#include<string.h>
typedef struct{char nome[10];int idade;float altura;}Tcada;
Tcada c[100];
int op;
int i,j,no=0;
Cadastrar(){
            for(i=0;i<5;i++){
            printf("Digite o nome:\n");
            fflush(stdin);
            gets(c[i].nome);
            printf("Digite idade:\n");
            scanf("%i",&c[i].idade);
            printf("Digite altura:\n");
            scanf("%f",&c[i].altura);
            i++;
            if(strcmp(c[i].nome, "fim")==0){
            break;}
            }
            }
Resultado(){
            for(j=0;j<i;j++){
            if(strcmp(c[j].idade)>19 || ==0){
                                     no++;
                                     }
                                     }
            printf("nome:%s\n",c[j].idade);
            }
main(){
       do{
          printf("digite sua opcao\n");
          printf("1-Cadastro\n");
          printf("2-resultado dos alunos que podem jogar:\n");
          printf("3-sair\n");
          scanf("%i",&op);
          switch(op){
                     case 1:Cadastrar();
                     break;
                     case 2:Resultado();
                     break;
                     }
                     }while(op!=3);
                     system("pause");
                     }
