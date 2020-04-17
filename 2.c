#include<stdio.h>
#include<string.h>
void contar(char texto[100], int *numPalavras, int *numLetras){
int i,c;
c=0;
for(i=0;i<=strlen(texto);i++){
if((texto[i]!=' ')&&(texto[i]!='\0')){
(*numLetras)++;}
if((texto[i]==' ')&&(texto[i]!='\0')){
(*numPalavras)++;}}
}
main(){
char texto[]="";
int numLetras=0;
int numPalavras=1;
printf("Digete o seu texto ao terminar acrecente o ponto final(.):\n");
fflush(stdin);
gets(texto);
printf("%i",strlen(texto));
contar(texto,&numPalavras,&numLetras);
printf("\n\nO texto contem %i palavras.\n", numPalavras);
printf("O texto contem %i letras.\n\n", numLetras);
printf ("%s \n",texto );
system("pause");}
