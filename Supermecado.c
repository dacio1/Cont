#include<stdio.h>
#include<string.h>

typedef struct{char nopr[30];float prec;char ti[30];}Tsuper;
Tsuper super[30];
int i=0,op,p,a;
float aum;
char o[5];
cadastrar(){
            do{
            printf("digite nome do produto:\n");
            fflush(stdin);
            gets(super[i].nopr);
            printf("preco:\n");
            scanf("%f",&super[i].prec);
            printf("tipo do produto:\n");
            fflush(stdin);
            gets(super[i].ti);
            i++;
            printf("digite sair para finalizar cadastro:\n");
            fflush(stdin);
            gets(o);
            }while(strcmp(o,"sair")!=0);
            printf("\n\n");
            }
            pesquisar(){
                        char produto[30];
                        printf("digite o nome do produto que deseja pesquisar:\n");
                        fflush(stdin);
                        gets(produto);
                        for(p=0;p<i;p++){
                                         if(strcmp(produto, super[p].nopr)==0){
                                                         printf("preco:%.2f\n",super[p].prec);
                                                          printf("tipo:%s\n",super[p].ti);
                                                          printf("nome:%s\n",super[p].nopr);
                                                          }
                                                          }
                                                          }
                                                          aumentar(){
                                                                     printf("digite a porcentagem do aumento:\n");
                                                                     scanf("%f",&aum);
                                                                     for(a=0;a<i;a++){
                                                                                         printf("nome:%s\n",super[a].nopr);
                                                                                         printf("tipo:%s\n",super[a].ti);
                                                                                         aum=super[a].prec+(super[a].prec*(aum/100));
                                                                                         printf("preco com aumento:%.2f\n",aum);
                                                                                         }}
                                                          
main()
{
      do{
      printf("1-cadastrar\n");
      printf("2-pesquisar\n");
      printf("3-aumentar\n");
      printf("4-sair\n");
      printf("digite sua opcao:\n");
      scanf("%i",&op);
      switch(op){
                 case 1:cadastrar();
                 break;
                 case 2:pesquisar();
                 break;
                 case 3:aumentar();
                 break;
                 }
      }while(op!=4);
      system("pause");
      }
