/* 3 � Receba um n�mero qualquer e informe se este n�mero � par ou �mpar.*/

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
