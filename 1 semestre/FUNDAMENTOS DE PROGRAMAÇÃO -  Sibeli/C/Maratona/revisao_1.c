/*1 � Receba dois n�meros e verifique qual deles � maior. Apresente o n�mero de maior
valor.*/
#include<stdio.h>
#include<stdlib.h>
int main(){

    int a, b;

    printf("Entre com um valor => ");
    scanf("%d", &a);

    printf("Entre com o segundo valor =>");
    scanf("%d", &b);

    if(a>b){
        printf("\n%d tem valor maior!\n\n", a);
    }else{
        if(b>a){
            printf("\n%d tem valor maior!\n\n", b);
        }else {
            if(a=b){
                printf("\nOs valores sao iguais %d = %d\n\n", a, b);
            }
        }
    }
}
