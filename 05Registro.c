#include<stdio.h>
#include<string.h>

/*Daça um cadastro de "N" pessoas em uma agenda telefônica(nome e fone) em um vetor
de registro e quando eu digite nome da pessoa devolva o telefone solicitado.*/

typedef struct{int idade; char nome[30];}TAgenda; TAgenda ag[50];
int i, op, j, maior, posM, menor, posN;
float soma, media;
main(){
       i=0;
       do{
           printf("\nDigite o nome: ");
           fflush(stdin);
           gets(ag[i].nome);
           fflush(stdin);
           printf("\n Digite a idade: ");
           scanf("%i", &ag[i].idade);
           i++;
           printf("\nDeseja cadastrar outro? 0 para sair: ");
           scanf("%i", &op);
           printf("\n\n");
           }while(op!=0);
           soma=0;
           maior= ag[0].idade;
           menor= ag[0].idade;
           
           for(j=0; j<i; j++){
               soma=soma+ag[j].idade;
               if (ag[j].idade>=maior){
                                       maior=ag[j].idade;
                                       posM=j;}
               if (ag[j].idade<=menor){
                                       menor=ag[j].idade;
                                       posN=j;}}
               media=(soma)/i;
               printf("\nMedia: %0.2f", media);
               printf("\nMais Velho: %i", posM);
               printf("\n Nome: %s", strupr(ag[posM].nome));
               printf("\n Idade: %i", ag[posM].idade);
               printf("\n\n");
               printf("\nMais novo: %i", posN);
               printf("\n Nome: %s", strupr(ag[posN].nome));
               printf("\n Idade: %i", ag[posN].idade);
               printf("\n\n");
               
               system("pause");
               }
