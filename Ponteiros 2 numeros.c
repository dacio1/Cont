#include<stdio.h>
int n1,n2;
int calcula(int nu1,int nu2);
int calcula(int nu1,int nu2){
    if(nu1==nu2){
     return 1;}
     else{
          return 0;
          }
}
main(){
       printf("\nNumero 1:\n");
       scanf("%i",&n1);
       printf("\nNumero 2:\n");
       scanf("%i",&n2);
       printf("\nResultado:%i\n",calcula(n1,n2));
       system("pause");
       }
