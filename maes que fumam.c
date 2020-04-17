#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j,no=0,m=0;
char nome[100];
int fumam[50];
float pes[40];
char bebemorre[100];
int main(){
	for(i=0;i<4;i++){
		printf("\nDigite o nome do bebe:\n");
		fflush(stdin);
		gets(nome);
		printf("\nDigite 1-pra fumante 0-pra nao\n");
		scanf("%i",&fumam[i]);
		printf("\nDigite o peso do bebe:\n");
		scanf("%f",&pes[i]);
	}
	for(j=0;j<i;j++){
		if(fumam[j]==1){
			if(pes[j]<=2){
				m++;
				strcpy(bebemorre,nome);
			}
		}
		if(fumam[j]==1){
			if(pes[j]>2){
				no++;
			}
		}
	}
	printf("O numero de bebes que correm risco de morte eh:%i\n",m);
	printf("O seu nome eh:\n");
	puts(bebemorre);
	printf("A mae fuma mas o bebe nao corre risco:%i\n",no);
	system("pause");
	return 0;
}
