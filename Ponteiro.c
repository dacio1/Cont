#include<stdio.h>
int num;
/*porque nao retorna nada*/void MODIFICA(int *pont1);
void MODIFICA(int *pont1){
     *pont1=20;/*Faz o quer que ela altere*/
     
}
main(){
       int num=10;
       printf("%i\n",num);/*Mostra o valor*/
       MODIFICA(&num);/*chama o ponteiro e bota o
       endereço que quer que ela mude*/
       printf("%i",num);
       system("pause");
       }
