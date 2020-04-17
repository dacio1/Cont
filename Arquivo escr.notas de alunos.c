#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct notasalu{
char nome[30];
float n1;
float n2;
};
int main(){
	typedef struct notasalu notasalu;
	notasalu alu;
	int op=4;
	FILE *duffy;
	duffy=fopen("notes.txt","w");
	if(duffy==NULL){
	printf("ERRO AO ABRIR\n");
	return 1;
	}
	while(op==4){
	printf("\nDigite o nome do aluno:\n");
	scanf("%s",alu.nome);
	printf("\nDigite a primeira nota:\n");
	scanf("%f",&alu.n1);
	printf("\nDigite a segunda nota:\n");
	scanf("%f",&alu.n2);
	fprintf(duffy,"%s\n",alu.nome);
	fprintf(duffy,"%.2f\n",alu.n1);
	fprintf(duffy,"%.2f\n",alu.n2);
	printf("para cadastra mais alunos digite 4:\n");
	scanf("%i",&op);
	}
	fclose(duffy);
	system("pause");
	return 0;
}
