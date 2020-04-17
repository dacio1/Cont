#include<stdio.h>
#include<stdlib.h>
int salas[70];
int i,c;
int somasala=0;
int main(){
for(i=0;i<4;i++){
printf("\nDigite o numero de pessoas que cabem na sala %i:\n",i+1);
scanf("%i",&salas[i]);
}
somasala=(somasala+salas[i]);

printf("\nDigite o numero de pessoas que irao realizar o concurso:\n");
scanf("%i",&c);

system("pause");
return 0;
}
