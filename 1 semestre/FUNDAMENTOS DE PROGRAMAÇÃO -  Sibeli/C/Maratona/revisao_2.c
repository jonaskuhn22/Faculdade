/*2 – Receba três números e verifique qual deles é maior. Apresente o número de maior
valor.*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c;

    printf("Entre com um valor => ");
    scanf("%d", &a);

    printf("Entre com um valor => ");
    scanf("%d", &b);

    printf("Entre com um valor => ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("\n%d tem valor maior!\n\n", a);
    }else{
        if(b>a && b>c){
             printf("\n%d tem valor maior!\n\n", b);
        } else {
            if(c>a && c>b){

                 printf("\n%d tem valor maior!\n\n", c);
            }
        }
    }
}
