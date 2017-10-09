/*1 – Receba dois números e verifique qual deles é maior. Apresente o número de maior
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
