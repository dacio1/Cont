#include<stdio.h>
#include<stdlib.h>
int numero(int x){
    if(x%2==0){
    return 1;}
    else{
         return 0;
         }             
}
int num;
int main(){
printf("\nDigite o numero:\n");
scanf("%i",&num);
if(numero(num)==1){
printf("Numero Par\n");
}
else{
printf("NUMERO IMPAR\n");
}
system("pause");
return 0;
}
