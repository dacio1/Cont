#include<stdio.h>
#include<stdlib.h>
int matriz[3][3];
int linha,coluna;
int main(){
    for(linha=0;linha<3;linha++){
                                 
    for(coluna=0;coluna<3;coluna++){
    printf("Digite um numero:");
    scanf("%d",&matriz[linha][coluna]);
                                    }
                                    }
    for(linha=0;linha<3;linha++){
                                 
    for(coluna=0;coluna<3;coluna++){
    printf("%d\n",matriz[linha][coluna]);
    
                                    }
                                    }
    printf("\n");
    system("pause");
    return 0;
}
