#include<stdio.h>
#include<stdlib.h>
int nu[50];
int i,j;
char op[6];
int main(){
    do{
    printf("\nDigite um numero:\n");
    scanf("%i",&nu[i]);
    i++;
    printf("\nDigite sim para continuar\n");
    fflush(stdin);
    gets(op);
}while(strcmp(op,"sim")==0);
for(j=0;j=0;j--){
printf("A ordem dos numeros digitados em ordem inversa eh:%d\n",nu[j]);
}
    system("pause");
    return 0;
}
