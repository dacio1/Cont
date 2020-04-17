#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[25],op[5];
int i,j;
int main(){
    do{
    printf("\nDigite uma string:\n");
    fflush(stdin);
    gets(s);
    i++;
    printf("\nDigite sim  cadastrar mais strings:\n");
    fflush(stdin);
    gets(op);
}while(strcmp(op,"sim")==0);
for(j=0;j<i;j++){
printf("\n%s\n",strupr(s));
}
system("pause");
return 0;
}
