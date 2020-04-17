#include<stdio.h>
#include<stdlib.h>
int cont[10];
int i,j;
int main(){
    for(i=0;i<5;i++){
    printf("\nDigite um numero:\n");
    scanf("%i",&cont[i]);
}
for(j=0;j<5;j++){
printf("\nOs numeros digitados foram:%i\n",cont[j]);
}
system("pause");
return 0;
}
