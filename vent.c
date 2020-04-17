#include<stdio.h>
float t;
float tem=36;
main(){
       printf("digite a temperatura que deseja colacar no ar:\n");
       scanf("%f",&t);
       if(t<tem){
                 printf("ligar ar condicionado\n");
                 }
       if(t>tem){
                 printf("ligar ventilador\n");
                 }
                 
                 system("pause");
                 }
