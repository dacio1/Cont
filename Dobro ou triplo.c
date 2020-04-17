#include<stdio.h>
#include<stdlib.h>
int n,c;
int dados(int x){
if(x%2==0){
return 1;

}
else{
  return 0;
   }
}
int main(){
printf("\nDigite o numero:\n");
scanf("%i",&n);
if(dados(n)==1){
n=n*n;
printf("O numero eh:%i",n);
}
if(dados(n)==0){
n=n*n*n;
printf("O numero eh:%i\n",n);
}
system("pause");
return 0;
}
