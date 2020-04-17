#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char bebe[10];
int mae[4];
float pb[7];
int main(){
	int i;
	for(i=0;i<2;i++){
		printf("\nDigite o nome do bebe:\n");
		fflush(stdin);
		gets(bebe);
		printf("\nDigite 1-pra mae fumante 0-pra nao\n");
		scanf("%i",&mae[i]);
		printf("\nDigite o peso do bebe em quilos:\n");
		scanf("%f",&pb[i]);
	}
	int j;
	char n[10];
	for(j=0;j<i;j++){
		if(mae[j]==1){
			if(pb[j]<2){
				n[j]=bebe[j];
			
			}
		
		}
		
	}
	printf("Os bebes que correm risco sao:\n");
	printf("\nNome:%s\n",n[j]);
	system("pause");
	return 0;
}
