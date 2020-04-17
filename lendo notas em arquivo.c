#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct lnota{
char nomes[30];
float not1;
float not2;
};
int main(){
	struct lnota lnota[100];
	int i,num=0;
	char nombre[30];
	float media=0;
	FILE *duff;
	duff=fopen("notes.txt","r");
	if(duff==NULL){
	printf("ERRO AO LER ARQUIVO\n");
	return 1;
	}
	while(!feof(duff)){
	fscanf(duff,"%s\n",lnota[num].nomes);
	fscanf(duff,"%.2f\n",lnota[num].not1);
	fscanf(duff,"%.2f\n",lnota[num].not2);
	num++;
	}
	printf("\nDigite o nome do aluno que deseja procurar:\n");
	scanf("%s",nombre);
	for(i=0;i<num;i++){
	if(strcmp(nombre,lnota[i].nomes)==0){
	printf("Esse nome consta no arquivo\n");
	printf("Nome:%s\n",lnota[i].nomes);
	printf("1 nota:%2.f\n",lnota[i].not1);
	printf("2 nota:%2.f\n",lnota[i].not2);
	media=(lnota[i].not1+lnota[i].not2);
	printf("Media:%.2f\n",media);
	}
	}
	fclose(duff);
	system("pause");
	return 0;
}
