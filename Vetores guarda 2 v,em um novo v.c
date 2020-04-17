#include<stdio.h>
int i,j,l,m,n;
int v1[5];
int v2[10];
int v3[15];
main(){
       printf("\nVETOR1\n");
       for(i=0;i<5;i++){
       printf("\nDigite um numero:\n");
       scanf("%i",&v1[i]);
       }
printf("\nVetor2\n");
for(j=0;j<10;j++){
printf("\nDigite um numero:\n");
scanf("%i",&v2[j]);
}
for(l=0;l<5;l++){
v3[l]=v1[l];
}
for(m=5;m<15;m++){
v3[m]=v2[m-5];
}
for(n=0;n<15;n++){
printf("\n%d\n",v3[n]);
}
system("pause");
}
