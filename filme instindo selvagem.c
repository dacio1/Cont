#include<stdio.h>
#include<string.h>
int idade(int x){
	if(x>18 && x==18){
      return 1;
	}
}
char nome[10],op[5];
int ida[5];
int main(){
	int i,j;
	do{
	printf("\nDigite seu nome\n");
	fflush(stdin);
	gets(nome);
	printf("\nDigite sua idade\n");
	scanf("%i",&ida[i]);
	i++;
	printf("\nDeseja sair digite sim:\n");
	fflush(stdin);
	gets(op);
	}while(strcmp(op,"sim")!=0);
	int pode=0;
	for(j=0;j<i;j++){
	if(idade(ida[j])==1){
                         pode++;
    printf("As pessoas que podem assistir o filme sao:%i\n",pode);
 }
}
	system("pause");
	return 0;
}
