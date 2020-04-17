/*O curso de Sistemas de informações deseja saber se há alunos simultaneamente matriculados nas disciplinas de LP1
e Cálculo I.
- Devem ser lidos inicialmente as matrículas dos alunos de LP1 (máximo 60 alunos)
- Logo após são lidas as matrículas dos alunos de Cálculo 1 (máximo 50 alunos)
- Faça um programa que armazene os dois conjuntos em dois arrays diferentes e imprima os que estão simultaneamente matriculados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int op, i, j, l, m;
char matLP [60][60];
char matCalc [50][50];
int contLP = 0;
int contCalc = 0;

linha(){
        int n;
        for(n=0; n<=40; n++){
                 printf("-");
                 }
                 printf("\n");
                 }
                 
tela(){
       linha();
       printf("M A T R I C U L A S\n");
       printf("Linguagem de Programacao 1 \n");
       linha();
       }

MatLP(){

for (i=0; i<60; i++){
printf("Digite sua matrícula: ");
scanf("%s", matLP[i]);
contLP++;
if(strcmp(matLP[i], "fim")==0){
break;}
}
}

MatCalc(){

for(j=0; j<50; j++){
printf("Digite sua matrícula: ");
scanf("%s", matCalc[j]);
contCalc++;
if(strcmp(matCalc[j], "fim")==0){
break;
}
}
}

Resultado(){

	for(l=0; l<contLP; l++){
		for (m=0; m<contCalc; m++){
	if(strcmp(matLP[l], matCalc[m])==0){
	printf("\nAlunos matriculados simultaneamente: %s", matLP[l]);
}
}
}
}	

int main(){

do{
linha();
tela();
printf("\n 1- Linguagem de Programacao 1");
printf("\n 2- Calculo I");
printf("\n 3- Alunos que estao simultaneamente matriculados");
printf("\n 4- Sair\n\n");
linha();
printf("\n\nDigite sua opcao: ");
scanf("%i", &op);

	switch (op){

		case 1: MatLP();
		break;
		case 2: MatCalc();
		break;
		case 3: Resultado();
		break;
		   }
}while (op != 4);

}

