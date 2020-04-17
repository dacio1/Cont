#include<stdio.h>
#include<string.h>
typedef struct{char mo[30];int ano; char ti[30];}Tveiculo;
Tveiculo veiculo[30];
int i=0,op,a,b,c;
char o[5];
cadastrar(){
            do{
                 printf("modelo:\n");
                 fflush(stdin);
                 gets(veiculo[i].mo);
                 printf("ano:\n");
                 scanf("%i",&veiculo[i].ano);
                 printf("tipo de combustivel:\n");
                 printf("A-alcool\n G-gasolina\n F-flex\n");
                 fflush(stdin);
                 gets(veiculo[i].ti);
                 i++;
                 printf("digite sair para terminar o cadastro:\n");
                 fflush(stdin);
                 gets(o);
                 }while(strcmp(o,"sair")!=0); 
                 printf("\n\n");
                 }
                 listar(){
                          for(a=0;a<i;a++){
                                           printf("modelo:%s\n",veiculo[a].mo);
                                           printf("ano:%i\n",veiculo[a].ano);
                                           printf("tipo de combustivel:%s\n",veiculo[a].ti);
                                           }}
                                           flex(){
                                                  for(b=0;b<i;b++){
                                                                   if(strcmp(veiculo[b].ti,"F")==0){
                                                                                                    printf("modelo:%s\n",veiculo[b].mo);
                                                                                                    printf("ano:%i\n",veiculo[b].ano);
                                                                                                    printf("\n\n");}}
                                                                                                    }
                                                                                                    anos(){
                                                                                                           for(c=0;c<i;c++){
                                                                                                                            if(veiculo[c].ano >=2000){
                                                                                                                                              printf("modelo:%s\n",veiculo[c].mo);
                                                                                                                                              printf("combustivel:%s\n",veiculo[c].ti);
                                                                                                                                              }}}
                                                                                                    
main(){
       do{
       printf("digite sua opcao:\n");
       printf("1-cadastrar\n");
       printf("2-listar\n");
       printf("3-relatorio veiculos flex\n");
       printf("4- relatorio  veiculos acima dos anos 2000\n");
       printf("5-sair:\n");
       scanf("%i",&op);
       switch(op){
                  case 1:cadastrar();
                  break;
                  case 2:listar();
                  break;
                  case 3:flex();
                  break;
                  case 4:anos();
                  break;
                  
                  }
                  
       }while(op!=5);
       
       system("pause");
       }
