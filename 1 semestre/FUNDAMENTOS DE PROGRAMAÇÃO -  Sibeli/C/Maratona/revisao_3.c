/* 3 – Receba um número qualquer e informe se este número é par ou ímpar.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;

    printf("Entre com um valor => ");
    scanf("%d", &a);

    if( a % 2 == 0){
        printf("\n%d - PAR\n\n", a);
    }else{
        printf("\n%d - IMPAR\n\n", a);
    }
}
