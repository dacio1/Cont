#include<stdio.h>
#include<string.h>
typedef struct{char p[10];char ing[10];}Tdic;
Tdic dicionario[100];
int op;
int i;
int j;
Cadastrar(){
            for(i=0;i<11;i++){
            printf("Digite a palavra em portugues:\n");
            fflush(stdin);
            gets(dicionario[i].p);
            printf("Digite a palavra em ingles:\n");
            fflush(stdin);
            gets(dicionario[i].ing);
            i++;
            }
            }
Buscar(){
         char pa[30];
         printf("Digite a palavra que vc procura:\n");
         fflush(stdin);
         gets(pa);
         for(j=0;j<i;j++){
         
         if(strcmp(pa,dicionario[j].p)==0){
         printf("A palavra que voce digitou em ingles eh:%s\n",dicionario[j].ing);
         fflush(stdin);
         }
         
         }
         }
main(){
       do{
          printf("Digite opcao\n");
          printf("1-cadastrar\n");
          printf("2-buscar\n");
          printf("3-sair\n");
          scanf("%i",&op);
          switch(op){
           case 1:Cadastrar();
           break;
           case 2:Buscar();
           break;
           }
          }while(op!=3);
          system("pause");
          }
