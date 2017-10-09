#include<stdio.h>
#include<stdlib.h>
int main(){

    int a;

    printf("Digite um numero => ");
    scanf("%d", &a);

    switch(a){
    case 1:
        printf("\nGREMIO!!\n\n");
        break;
    case 2:
        printf("\nINTERNACIONAL!!\n\n");
        break;
    case 3:
        printf("\nFLAMENGO!!\n\n");
        break;
    case 4:
        printf("\nSAO PAULO!!\n\n");
        break;
    case 5:
        printf("\nCORINTHIANS!!\n\n");
        break;
    default:
        printf("\n__Numero INVALIDO!!__\n\n");
        break;
    }
}
