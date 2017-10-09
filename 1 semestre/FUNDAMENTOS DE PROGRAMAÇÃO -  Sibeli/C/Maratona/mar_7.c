/*7 - Faça um programa que leia um número entre 0 e 10, e escreva este número por
extenso.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;

    printf("Digite um numero entre 0 e 10: ");
    scanf("%d", &a);

    if(a==0){
        printf("\nZero.\n\n");
    }else if(a==1){
        printf("\nUm.\n\n");
    }else if(a==2){
        printf("\nDois.\n\n");
    }else if(a==3){
        printf("\nTres.\n\n");
    }else if(a==4){
        printf("\nQuatro.\n\n");
    }else if(a==5){
        printf("\nCinco.\n\n");
    }else if(a==6){
        printf("\nSeis.\n\n");
    }else if(a==7){
        printf("\nSete.\n\n");
    }else if(a==8){
        printf("\nOito.\n\n");
    }else if(a==9){
        printf("\nNove.\n\n");
    }else if(a==10){
        printf("\nDez.\n\n");
    }else {
        printf("\n\nNumero invalido!!!!\n\n\n");
    }
}
