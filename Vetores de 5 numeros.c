#include<stdio.h>
#include<stdlib.h>
int i,j,l;
int numeros[15];
int main(){
    for(i=0;i<5;i++){
printf("\nDigite um numero:\n");
scanf("%i",&numeros[i]);
}
for(j=0;j<5;j++){
printf("\nOs numeros digitados em ordem foram\n");
printf("%i\n",numeros[j]);
}
for(l=5;l>0;l--){
printf("\nOs numeros na ordem inversa sao\n");
printf("%i\n",numeros[l]);
}
system("pause");
return 0;
}
