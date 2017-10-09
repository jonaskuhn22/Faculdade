/*1 – Receba dois números e verifique qual deles é maior. Apresente o número de maior
valor.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b;

    printf("Entre com um numero => ");
    scanf("%d", &a);

    printf("Entre com outro numero => ");
    scanf("%d", &b);

    if(a>b){
        printf("\nO numero maior : %d\n\n", a);
    }else if(b>a){
         printf("\nO numero maior : %d\n\n", b);
    }
}
