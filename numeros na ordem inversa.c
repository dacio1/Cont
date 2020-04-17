#include<stdio.h>
int nu;
char op[5];
int i=0;
int j;
main(){
       do{
       printf("Digite um numero:\n");
       scanf("%i",&nu);
       i++;
       printf("deseja sair?\n");
       printf("Digite sim para finalizar \n");
       fflush(stdin);
       gets(op);
       }while(strcmp(op, "sim")!=0);
       for(j=0;j<i;j--){
                        printf("%i");
                        }
       system("pause");
       }
       
